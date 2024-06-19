#ifndef NODEQUEUE_H
#define NODEQUEUE_H
#include "Student.h"


class NodeQueue
{
    public:
        NodeQueue *next;
        NodeQueue *prev;

        Student data;
        NodeQueue();
        NodeQueue(class Student, NodeQueue*, NodeQueue*);

};


#endif // NODEQUEUE_H
