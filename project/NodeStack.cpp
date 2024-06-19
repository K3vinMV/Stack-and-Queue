#include "NodeStack.h"
#include "Student.h"

NodeStack::NodeStack()
{
    Student data;
    next=nullptr;
    //ctor
}

NodeStack::NodeStack(class Student data, NodeStack *next)
{
    this->data=data;
    this->next=next;
}
