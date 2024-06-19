#ifndef STACK_H
#define STACK_H
#include "Student.h"
#include "NodeStack.h"
#include <iostream>

using namespace std;

class Stack
{
    public:
        NodeStack *h;

        Stack();
        Stack(NodeStack*);

        void initialize();
        void push(class Student);
        void pop();
        NodeStack* top();
        void isEmpty();
        void removeAll();
        void display();


};


#endif // STACK_H
