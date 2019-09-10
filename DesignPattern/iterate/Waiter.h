#pragma once

#include <memory>

class Iterate;

class Waiter
{
public:
    Waiter() = default;
    ~Waiter() = default;

public:
    void PrintAllMenu();

    void PrintAllMenu2();

private:
    void Traversal(std::shared_ptr<Iterate> iterate);
};