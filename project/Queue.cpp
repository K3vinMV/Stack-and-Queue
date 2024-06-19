#include "Queue.h"
#include "Student.h"

Queue::Queue()
{
    //ctor
}

Queue::Queue(NodeQueue *ptr, NodeQueue *ptr1)
{
    h=ptr;
    t=ptr1;
}

void Queue::initialize()
{
    h=nullptr;
    t=nullptr;
}

void Queue::enqueue(class Student data)
{
    NodeQueue *tmp=new NodeQueue(data,nullptr,nullptr);
    tmp->data=data;

    if(!h)
    {
        h=tmp;
        t=tmp;
    }else if(t)
    {
        t->next=tmp;
        tmp->prev=t;
        t=tmp;
    }
}

void Queue::Dequeue()
{
    NodeQueue *aux=h;

    if(t)
    {
        h=h->next;
        h->prev=nullptr;
        delete aux;
    }else
    {
        cout<<"The queue is empty"<<endl;
    }
}

NodeQueue* Queue::first()
{
    if(h)
    {
      return h;
    }else
    {
        return nullptr;
    }
}

NodeQueue* Queue::last()
{
    if(h)
    {
      return t;
    }else
    {
        return nullptr;
    }
}

void Queue::isEmpty()
{
    if (h==nullptr)
    {
        cout<<"Queue is empty"<<endl;
    }else
    {
        cout<<"Queue has elements"<<endl;
    }
}

int Queue::Size()
{
    int i=0;
    NodeQueue *aux=h;

    if(h==nullptr)
    {
        return i;
    }else
    {
        while(aux)
        {
            aux=aux->next;
            i++;
        }
        return i;
    }
}

void Queue::removeAll()
{
    while(h)
    {
        NodeQueue *aux=h;
        h=aux->next;
        delete aux;
    }
}

void Queue::display()
{
    NodeQueue *aux=t;
    if(h)
    {
        while(aux)
        {
            cout<<"Name: "<<aux->data.name<<endl;
            cout<<"Age: "<<aux->data.age<<endl;
            cout<<"Code: "<<aux->data.code<<endl;
            cout<<"\n"<<endl;
            aux=aux->prev;
        }
    }else
    {
        cout<<"Queue is empty"<<endl;
    }
}
