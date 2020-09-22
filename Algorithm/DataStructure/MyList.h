#pragma once

template <typename list_type>
struct MyList
{
    list_type data;
    MyList* next;

    MyList()
        : data(list_type()),
          next(nullptr)
    {
    }
};

template<typename list_type>
MyList<list_type>* CreateMyList()
{
    return new MyList<list_type>;
}

template<typename list_type>
void DestroyMyList(const MyList<list_type>* const list)
{
   auto index = list;
    while (index)
    {
        auto next = index->next;
        delete index;
        index = next;
    }
}

template<typename list_type>
MyList<list_type>* FindMyList(MyList<list_type>* list, const list_type& target)
{
    auto index = list;
    while (index)
    {
        if (index->data == target)
        {
            return index;
        }
        index = index->next;
    }
    return nullptr;
}

template<typename list_type>
MyList<list_type>* FindMyList2(const MyList<list_type>* const list, const list_type& target)
{
    if (list == nullptr)
    {
        return nullptr;
    }
    if (list->data == target)
    {
        return list;
    }
    return FindMyList2(list->next, target);
}

template<typename list_type>
void AddMyList(MyList<list_type>* list, const list_type& data)
{
    auto new_node = new MyList<list_type>;
    new_node->data = data;
    if (list == nullptr)
    {
        list = new_node;
        return;
    }

    auto index = list;
    while (index)
    {
        if (index->next == nullptr)
        {
            index->next = new_node;
            return;
        }
        index = index->next;
    }
}

template<typename list_type>
bool RemoveMyList(MyList<list_type>* list, const list_type& data)
{
    if (list == nullptr)
    {
        return false;
    }
    MyList* index = list;
    MyList* pre = list;
    while (index)
    {
        if (index->data == data)
        {
            MyList* target = index;
            pre->next = index->next;
            delete target;
            return true;
        }
        pre = index;
        index = index->next;
    }

    return true;
}