#include "EvenStack.h"

EvenStack::EvenStack()
{
    //ctor
}

void EvenStack::push(int num)
{
    m_num = num;
    if (m_num % 2 == 0)
    {
        m_stack.push(m_num);
    }
    else
    {
        cout << "Error - can only push even numbers" << endl;
    }
}

int EvenStack::size()
{
    return m_stack.size();
}

bool EvenStack::empty()
{
    return m_stack.empty();
}

int EvenStack::pop()
{
    if(!m_stack.empty())
    {
        m_stack.pop();
        return 0;
    }

    else
    {
        return -1;
    }

    return 0;
}

int EvenStack::top()
{
    if (!m_stack.empty())
    {
        return m_stack.top();
    }
    else
    {
        return -1;
    }
}

void EvenStack::emptyStack()
{
    cout << "Removing the following: ";
    while(!m_stack.empty())
    {
        cout << m_stack.top() << " ";
        m_stack.pop();
    }
    cout << endl;

}

void EvenStack::getEvenNumbers(stack<int> s)
{
    vector<int>evenNumbers;

    while(!s.empty())
    {
        if(s.top() % 2 != 0)
        {
            s.pop();

        }
        else
        {
            evenNumbers.push_back(s.top());
            s.pop();
        }
    }

    for (auto it = evenNumbers.rbegin(); it != evenNumbers.rend(); it++)
    {
        m_stack.push(*it);
    }



}
