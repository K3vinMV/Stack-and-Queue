#include "NodeQueue.h"
#include "Student.h"

NodeQueue::NodeQueue()
{
    Student data;
    next=nullptr;
    prev=nullptr;
    //ctor
}
NodeQueue::NodeQueue(class Student data, NodeQueue *next, NodeQueue *prev)
{
    this->data=data;
    this->next=next;
    this->prev=prev;
}
