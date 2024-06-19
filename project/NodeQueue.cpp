#include "NodeQueue.h"
#include "Student.h"

NodeQueue::NodeQueue()
{
    Student data;
    next=nullptr;
    //ctor
}
NodeQueue::NodeQueue(class Student data, NodeQueue *next)
{
    this->data=data;
    this->next=next;
}
