#ifndef QUEUE_H
#define QUEUE_H
#include "NodeQueue.h"
#include "Student.h"
#include <iostream>

using namespace std;

class Queue
{
    public:
        NodeQueue *h;
        NodeQueue *t;

        Queue();
        Queue(NodeQueue*,NodeQueue*);

        void initialize();
        void enqueue(class Student);
        void Dequeue();
        NodeQueue *first();
        NodeQueue *last();
        void isEmpty();
        int Size();
        void removeAll();
        void display();


};

#endif // QUEUE_H
