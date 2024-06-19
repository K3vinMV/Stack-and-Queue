#ifndef NODEQUEUE_H
#define NODEQUEUE_H
#include "Student.h"


class NodeQueue
{
    public:
        NodeQueue *next;

        Student data;
        NodeQueue();
        NodeQueue(class Student, NodeQueue*);

};


#endif // NODEQUEUE_H
