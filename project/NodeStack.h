#ifndef NODESTACK_H
#define NODESTACK_H
#include "Student.h"

class NodeStack
{
    public:
        NodeStack *next;

        Student data;
        NodeStack();
        NodeStack(class Student, NodeStack*);

};


#endif // NODESTACK_H
