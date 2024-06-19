#include "Stack.h"
#include "Student.h"
#include "NodeStack.h"


Stack::Stack()
{
    //ctor
}
Stack::Stack(NodeStack *ptr)
{
    h = ptr;
}

void Stack::initialize()
{
    h = nullptr;
}

void Stack::push(class Student data)
{
    NodeStack *tmp=new NodeStack(data,nullptr);
    if(!h)
    {
        h=tmp;
    }else
    {
        tmp->next=h;
        h=tmp;
    }
}


void Stack::pop()
{
    if(h)
    {
        NodeStack *aux=h;

        h=h->next;
        delete aux;
    }
    else
    {
        cout<<"Stack is already empty"<<endl;
    }
}

NodeStack* Stack::top()
{
    if(h)
    {
        return h;
    }else
    {
        return nullptr;
    }
}

void Stack::isEmpty()
{
    if (h==nullptr)
    {
        cout<<"Stack is empty"<<endl;
    }else
    {
        cout<<"Stack has elements"<<endl;
    }
}

void Stack::removeAll()
{
    while (h!= nullptr)
    {
        NodeStack *aux = h;
        h=aux->next;
        delete aux;
    }
}

void Stack::display()
{
    if(h==nullptr)
    {
        cout<<"Stack is empty"<<endl;
    }
    while(h)
    {
        NodeStack *aux=h;
        h=h->next;
        cout<<aux->data.name<<endl;
        cout<<aux->data.age<<endl;
        cout<<aux->data.code<<endl;
        cout<<"\n"<<endl;
    }
}
