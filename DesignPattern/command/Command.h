#pragma once

// 命令模式解耦了请求者和执行者，使异步执行排队成为可能
class Command
{
public:
    Command() = default;
    virtual ~Command() = default;

    virtual void Excute() = 0;
};