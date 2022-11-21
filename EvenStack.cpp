#include "EvenStack.h"
#include <stack>
#include <string>
#include <iostream>

EvenStack::EvenStack()
{
    //nothing
}

int EvenStack::getEvenNumbers(stack<int> c)
{
    while(!c.empty()){
           nStack.push(c.top());
           //cout << " "<< c.top();
           c.pop();
    }
    while(!nStack.empty()){
        if (nStack.top() % 2 == 0){
            Stack.push(nStack.top());
            //cout << " "<< c.top();
            nStack.pop();
        }
        else {
            nStack.pop();
        }
        }
    return 0;
}

void EvenStack::push(int x)
{
    if ( x % 2 == 0) {
        Stack.push(x);
    }
    else{
    cout << "Error - can  only push even numbers";
    cout << endl;
    }
}

void EvenStack::pop()
{
    Stack.pop();
}

void EvenStack::top()
{
    Stack.top();
}

int EvenStack::size()
{
    return Stack.size();
}

int EvenStack::emptyStack()
{
    cout << "Removing the following: ";
    while (!Stack.empty()){
            cout << " "<< Stack.top();
            Stack.pop();
    }

}
