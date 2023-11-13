#ifndef EVENSTACK_H
#define EVENSTACK_H
#include <stack>
#include <iostream>
#include <vector>

using namespace std;


class EvenStack
{
    public:
        EvenStack();
        void push(int);
        int pop();
        int top();
        int size();
        bool empty();
        void getEvenNumbers(stack<int>);
        void emptyStack();

    protected:

    private:
        int m_num;
        stack <int> m_stack;

};

#endif // EVENSTACK_H
