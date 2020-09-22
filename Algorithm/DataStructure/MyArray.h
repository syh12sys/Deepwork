#pragma once

#include <stdio.h>

template <typename array_type>
struct MyArray
{
    array_type* base;
    // 已使用
    int used;
    // 总空间
    int capability;

    MyArray()
        : base(nullptr),
          used(0),
          capability(0)
    {
    }
};

template <typename array_type>
MyArray<array_type>* CreateMyArray(int capability)
{
    if (capability <= 0)
    {
        return nullptr;
    }
    MyArray<array_type>* array = new MyArray<array_type>();
    array->base = new array_type[capability];
    array->capability = capability;
    return array;
}

template <typename array_type>
array_type GetAt(const MyArray<array_type>* const array, int i)
{
    return array->base[i];
}

template <typename array_type>
bool IsValid(const MyArray<array_type>* const array)
{
    if (array == nullptr || array->base == nullptr || array->capability == 0)
    {
        return false;
    }
    return true;
}

template <typename array_type>
void InitMyArray(MyArray<array_type>* const array, array_type init_value = 0)
{
    if (!IsValid(array))
    {
        return;
    }
    memset(array->base, init_value, sizeof(array_type) * array->capability);
}

template <typename array_type>
bool DestroyMyArray(const MyArray<array_type>* const array)
{
    if (!IsValid(array))
    {
        return false;
    }

    delete[] array->base;
    delete array;
    return true;
}

template <typename array_type>
int FindMyArray(const MyArray<array_type>* const array, const array_type& target)
{
    if (!IsValid(array))
    {
        return -1;
    }

    for (int i = 0; i < array->capability; ++i)
    {
        if (array->base[i] == target)
        {
            return i;
        }
    }
    return -1;
}

template <typename array_type>
bool AddMyArray(MyArray<array_type>* const array, const array_type& target)
{
    if (!IsValid(array))
    {
        return false;
    }

    if (array->used == array->capability)
    {
        int new_capability = array->capability * 2;
        array_type* new_base = new array_type[new_capability];
        memcpy_s(new_base, sizeof(array_type) * new_capability, array->base, array->capability);
        delete[] array->base;
        array->base = new_base;
        array->capability = new_capability;
    }

    array->base[array->used] = target;
    ++array->used;
    return true;
}

template <typename array_type>
bool RemoveMyArray(MyArray<array_type>* const array, const array_type& target)
{
    if (!IsValid(array))
    {
        return false;
    }

    int targetIndex = FindMyArray(array, target);
    if (targetIndex == -1)
    {
        return false;
    }

    // 移动元素
    for (int i = targetIndex; i < array->used; ++i)
    {
        array->base[i] = array->base[i + 1];
    }
    --array->used;
    return true;
}
