#include "stdafx.h"
#include "Subject.h"

Subject::Subject()
    : m_state(0)
{

}

void Subject::SetState(int state)
{
    m_state = state;
    NotifyObservers();
}

void Subject::AddObserver(Observer* observer)
{
    m_observers.push_back(observer);
}

void Subject::RemoveObserver(Observer* observer)
{
    auto iter = std::find(m_observers.begin(), m_observers.end(), observer);
    if (iter != m_observers.end())
    {
        m_observers.erase(iter);
    }
}

void Subject::NotifyObservers()
{
    for (const auto& observer : m_observers)
    {
        observer->OnStateChange(m_state);
    }
}