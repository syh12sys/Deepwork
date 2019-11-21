#pragma once

#include <stack>

class TwoStackSimulateQueue
{
public:
    TwoStackSimulateQueue() = default;
    ~TwoStackSimulateQueue() = default;

    void Push(int element);

    int Pop();

private:
    std::stack<int> firstStack;

    std::stack<int> secondStack;
};