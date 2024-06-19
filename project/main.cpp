#include <iostream>
#include "Student.h"
#include "Stack.h"
#include "Queue.h"
#include "NodeQueue.h"
#include "NodeStack.h"

using namespace std;

void pause();

int main()
{
    Stack *sta=new Stack();
    Queue *que=new Queue();
    Student data;
    int opt,opt2,opt3;


    do
    {
        system("cls");
        cout<<"---------------"<<endl;
        cout<<"1.-Stack"<<endl;
        cout<<"2.-Queue"<<endl;
        cout<<"3.-Exit"<<endl;
        cout<<"---------------"<<endl;
        cout<<"\nPlease enter an option: ";
        cin>>opt;

        switch(opt)
        {
        case 1:
            system("cls");
            do
            {
                system("cls");
                cout<<"-----------STACK------------"<<endl;
                cout<<"1.-Initialize"<<endl;
                cout<<"2.-Push"<<endl;
                cout<<"3.-Pop"<<endl;
                cout<<"4.-Top"<<endl;
                cout<<"5.-Is Empty?"<<endl;
                cout<<"6.-Remove all"<<endl;
                cout<<"7.-Return"<<endl;
                cout<<"---------------------------"<<endl;
                cout<<"\nPlease enter an option: ";
                cin>>opt2;

                switch(opt2)
                {
                case 1:
                     system("cls");
                     cout<<"------INITIALIZE------"<<endl;
                     sta->initialize();
                     cout<<"Stack started"<<endl;
                     pause();
                     break;

                case 2:
                     system("cls");
                     cout<<"------PUSH------"<<endl;
                     cout<<"Insert name: ";
                     cin>>data.name;
                     cout<<"Insert age: ";
                     cin>>data.age;
                     cout<<"Insert code: ";
                     cin>>data.code;
                     sta->push(data);
                     pause();
                     break;

                case 3:
                     system("cls");
                     cout<<"------POP------"<<endl;
                     cout<<"First student is out of the stack"<<endl;
                     sta->pop();
                     pause();
                     break;

                case 4:
                     system("cls");
                     cout<<"------TOP------"<<endl;
                     NodeStack *first;
                     first=(sta->top());
                     if(first)
                     {
                        cout<<"The student that is on top of the stack is: "<<endl;
                        cout<<first->data.name<<endl;
                        cout<<first->data.age<<endl;
                        cout<<first->data.code<<endl;
                     }
                     else
                     {
                         cout<<"Stack is empty"<<endl;
                     }
                     pause();
                     break;

                case 5:
                     system("cls");
                     cout<<"------IS EMPTY?------"<<endl;
                     sta->isEmpty();
                     pause();
                     break;

                case 6:
                     system("cls");
                     int rm;
                     cout<<"------REMOVE ALL------"<<endl;
                     cout<<"Are you sure you want to remove all?"<<endl;
                     cout<<"1.-Yes"<<endl;
                     cout<<"2.-No"<<endl;
                     cin>>rm;
                     if(rm==1)
                     {
                         cout<<"Emptying..."<<endl;
                         sta->removeAll();
                     }else
                     {
                         cout<<"Regresando..."<<endl;
                     }
                     pause();
                    break;

                case 7:
                    system("cls");
                    cout<<"Quitting..."<<endl;
                    pause();
                    break;

                default:
                    system("cls");
                    cout<<"Not a valid option"<<endl;
                    pause();
                    break;
                }
            }while(opt2!=7);
            break;

        case 2:
            system("cls");
            do
            {
                system("cls");
                cout<<"-----------QUEUE------------"<<endl;
                cout<<"1.-Initialize"<<endl;
                cout<<"2.-Queue"<<endl;
                cout<<"3.-Dequeue"<<endl;
                cout<<"4.-First"<<endl;
                cout<<"5.-Last"<<endl;
                cout<<"6.-Is empty?"<<endl;
                cout<<"7.-Size"<<endl;
                cout<<"8.-Remove all"<<endl;
                cout<<"9.-Return"<<endl;
                cout<<"---------------------------"<<endl;
                cout<<"\nPlease enter an option: ";
                cin>>opt3;

                switch(opt3)
                {
                case 1:
                    system("cls");
                    cout<<"------INITIALIZE------"<<endl;
                    que->initialize();
                    cout<<"Queue started"<<endl;
                    pause();
                    break;

                case 2:
                    system("cls");
                    cout<<"------QUEUE------"<<endl;
                    cout<<"Insert name: ";
                    cin>>data.name;
                    cout<<"Insert age: ";
                    cin>>data.age;
                    cout<<"Insert code: ";
                    cin>>data.code;
                    que->enqueue(data);
                    pause();
                    break;

                case 3:
                    system("cls");
                    cout<<"------DEQUEUE------"<<endl;
                    cout<<"Dequeued student"<<endl;
                    que->Dequeue();
                    pause();
                    break;

                case 4:
                    system("cls");
                    cout<<"------FIRST------"<<endl;
                    NodeQueue *first;
                    first=(que->first());
                    if(first)
                    {
                        cout<<"The first student in the queue is: "<<endl;
                        cout<<first->data.name<<endl;
                        cout<<first->data.age<<endl;
                        cout<<first->data.code<<endl;
                    }else
                    {
                        cout<<"Queue is empty"<<endl;
                    }
                    pause();
                    break;

                case 5:
                    system("cls");
                    cout<<"------LAST------"<<endl;
                    NodeQueue *last;
                    last=(que->last());
                    if(last)
                    {
                        cout<<"The last student in the queue is: "<<endl;
                        cout<<last->data.name<<endl;
                        cout<<last->data.age<<endl;
                        cout<<last->data.code<<endl;
                    }else
                    {
                       cout<<"The queue is empty"<<endl;
                    }
                    pause();
                    break;

                case 6:
                    system("cls");
                    cout<<"------IS EMPTY?------"<<endl;
                    que->isEmpty();
                    pause();
                    break;

                case 7:
                    system("cls");
                    cout<<"------SIZE------"<<endl;
                    int i;
                    i=(que->Size());
                    cout<<"The size of the queue is: "<<i<<endl;
                    pause();
                    break;

                case 8:
                    system("cls");
                    int rm;
                    cout<<"------REMOVE ALL------"<<endl;
                    cout<<"Are you sure you want to remove all?"<<endl;
                    cout<<"1.-Yes"<<endl;
                    cout<<"2.-No"<<endl;
                    cin>>rm;
                    if(rm==1)
                    {
                        cout<<"The queue is emptying..."<<endl;
                        que->removeAll();
                    }else
                    {
                        cout<<"Returning..."<<endl;
                    }
                    pause();
                    break;

                case 9:
                    system("cls");
                    cout<<"Returning..."<<endl;
                    pause();
                    break;

                default:
                    system("cls");
                    cout<<"Not a valid option"<<endl;
                    pause();
                    break;
                }

            }while(opt3!=9);
            break;

        case 3:
            system("cls");
            cout<<"Quitting..."<<endl;
            break;

        default:
            system("cls");
            cout<<"Not a valid option"<<endl;
            pause();
            break;
        }
    }while(opt!=3);


    return 0;
}

void pause()
{
    cout<<"Press any key to continue...";
    getwchar();
    getwchar();
}
