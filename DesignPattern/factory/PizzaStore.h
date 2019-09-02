#pragma once

#include <string>
#include <memory>

class Pizza;

// ��ʵ��һ�����ȫ�ļ򵥹���Ҳ��ʵ�ֹ��ܣ��������ַ�������ʵ����ľ���̫Զ��
// �򵥹���������Ϊ���ܲ��ṩ�ģ�ÿ�ηֲ�����������Ҫ֪ͨ�ܲ�����һЩ�����������ӾͲ������̫���Ҷ������鷳
// ���������������ϲ��ƶ���ܣ��²�ȥӦ�õĳ���
class PizzaStore
{
public:
    PizzaStore() = default;
    ~PizzaStore() = default;

public:
    void OrderPizza(const std::string& pizzaType);

public:
    virtual std::shared_ptr<Pizza> CreatePizza(const std::string& pizzaType) = 0;
};