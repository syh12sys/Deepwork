#include "stdafx.h"
#include "stack_queue_algorithm.h"

void TwoStackSimulateQueue::Push(int element)
{
    firstStack.push(element);
}

int TwoStackSimulateQueue::Pop()
{
    if (secondStack.empty())
    {
        while (!firstStack.empty())
        {
            secondStack.push(firstStack.top());
            firstStack.pop();
        }
    }
    if (!secondStack.empty())
    {
        int topElement = secondStack.top();
        secondStack.pop();
        return topElement;
    }
    else
    {
        throw L"Õ»Îª¿Õ";
    }
}