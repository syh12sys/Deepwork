#pragma once

#include <string>
#include <memory>

class Pizza;

// ��ʵ��һ�����ȫ�ļ򵥹���Ҳ��ʵ�ֹ��ܣ��������ַ�������ʵ����ľ���̫Զ��
// �򵥹���������Ϊ���ܲ��ṩ�ģ�ÿ�ηֲ�����������Ҫ֪ͨ�ܲ�����һЩ�������������������̫���Ҷ������鷳
// ���������������ϲ��ƶ���ܣ��²�ȥӦ�õĳ�������Ҳ��ģ��ģʽ�ڴ��������ϵľ���Ӧ��
// ���������ǽ��ƽ����㼶�ṹ����ѷ���
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