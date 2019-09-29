#pragma once

class MenuItem;

// 封装聚合对象的遍历行为，把遍历从本体中摘出来也符合单一职责原则
class Iterate
{
public:
    virtual ~Iterate() = default;

public:
    virtual bool HasNext() = 0;

    virtual MenuItem* Next() = 0;
};