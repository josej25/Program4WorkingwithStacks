#ifndef EVENSTACK_H
#define EVENSTACK_H
#include <stack>
#include <string>
#include <iostream>

using namespace std;

class EvenStack
{
    public:
        EvenStack();

        stack<int>Stack,nStack;
        int emptyStack(); // pop off all the values in a stack
        int size();
        void top();
        void push(int num);
        void pop();
        int newNum;

        int getEvenNumbers(stack<int>);

};

#endif // EVENSTACK_H
