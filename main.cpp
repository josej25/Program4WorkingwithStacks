/*
    Program that implements a class that only contain even numbers
    Author: Jojo Jose
    Date: Nov 19th, 2022
*/

#include <iostream>
#include <stack>
#include "EvenStack.h"

using namespace std;

int main()
{
    EvenStack myStack;
    myStack.push(44);
    myStack.push(66);
    myStack.push(99);
    myStack.push(88);
    myStack.pop();


    myStack.emptyStack();
    cout << endl;


    stack <int> aStack;
    EvenStack newStack;
    aStack.push(2);
    aStack.push(9);
    aStack.push(6);
    aStack.push(2);
    aStack.push(3);
    aStack.push(5);
    aStack.push(4);
    newStack.getEvenNumbers(aStack);

    cout << "aStack has " << aStack.size() << " elements" << endl;
    newStack.emptyStack();

    cout << endl;

    return 0;
}
