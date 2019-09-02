#ifndef _Subject_h_
#define _Subject_h_

#include <list>

// �仯������ӿڱ��(�������֪ͨ����)��
// �����ʽ���������ӿڱ��
// ֪ͨ��Χ������״̬״̬�仯��ʱ������Ҳ����֪ͨ��
// ����ɲ�Σ����dll�ɲ�Ρ�ϵͳ�ɲ��ʽһ������
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