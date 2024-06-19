#ifndef NODESTACK_H
#define NODESTACK_H
#include "Student.h"

class NodeStack
{
    public:
        NodeStack *next;
        NodeStack *prev;

        Student data;
        NodeStack();
        NodeStack(class Student, NodeStack*, NodeStack*);

};


#endif // NODESTACK_H
