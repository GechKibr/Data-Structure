#include<iostream>
using namespace std;
#define MAX 10

class Myqueue{
 private:
 int items[MAX];
 int front,rear;

public:
Myqueue()
{
    front=-1;
    rear=-1;

}
void enqueue(int num);
void dequeue();
int isEmpty();
int isFull();
//void peek();
void display();
};
void Myqueue::dequeue()
{  
   
    if(isEmpty())
    {
        cout<<" \n the queue is empty "<<endl;
        return;
       
    }
   
     int deque_number = items[front];
    items[front] = 0; 
    cout << endl << "The element " << deque_number << " is removed" << endl;

    if (front == rear) { 
        front = -1;
        rear = -1;
    } else {
        front++;
    }

}

void Myqueue::display()
{
    cout<<" \n the queues.."<<endl;
    for(int i=front;i<=rear;i++)
    {
        cout<<"  "<<items[i]<<"  ";
    }
}
void Myqueue::enqueue(int num)
{
    if(isFull())
    {
        cout<<"queue is full"<<endl;
        return;
    }
    else
    {
    if(front==-1)
          {
             front=0;
         }
           
         rear++;
         items[rear]=num;
         
    }
}
int  Myqueue::isFull() 
{
      return rear==MAX-1;
       
}
int Myqueue::isEmpty() 
{
    
       return front==-1;     
}
