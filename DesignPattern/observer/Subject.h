#ifndef _Subject_h_
#define _Subject_h_

#include <list>

// 变化：面向接口编程(主题对象通知部分)、
// 解耦：链式对象和面向接口编程
// 通知范围：不仅状态状态变化，时机发生也可以通知、
// 对象可插拔：这和dll可插拔、系统可插拔式一个道理
class Subject
{
public:
    class Observer
    {
    public:
        virtual ~Observer() {}
        virtual void OnStateChange(int state) = 0;
    };

    Subject();
    ~Subject() = default;

    void SetState(int state);

    void AddObserver(Observer* observer);
    void RemoveObserver(Observer* observer);

private:
    void NotifyObservers();

private:
    int m_state;

    std::list<Observer*> m_observers;
};

#endif