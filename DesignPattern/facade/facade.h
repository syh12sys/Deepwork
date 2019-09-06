#pragma once

// 其实和简化版的适配器模式非常类似，例如适配器不采用继承去约束行为，那么类图上就完全一样的,只能通过语义上区分
// 适配器是为了转化接口,
// 门面是为了接口更容易使用,相当于提了一个简化便捷服务窗口，如果便捷服务不能满足个性化需求，还是可以自己走繁琐流程
class Facade
{
public:
    Facade() = default;
    ~Facade() = default;

public:
    void WatchTV();

    void CloseTV();
};