#include "NodeStack.h"
#include "Student.h"

NodeStack::NodeStack()
{
    Student data;
    next=nullptr;
    prev=nullptr;
    //ctor
}

NodeStack::NodeStack(class Student data, NodeStack *next, NodeStack *prev)
{
    this->data=data;
    this->next=next;
    this->prev=prev;
}
