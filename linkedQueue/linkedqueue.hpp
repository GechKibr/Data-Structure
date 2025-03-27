#include <iostream>
using namespace std;
struct person
{
	string name;
	int age;
	person* next;
};
class queue
{
private:
	person *front;
	person *rear;
	int size;
public:
	queue();
	void enqueue();
	void dequeue();
	bool isEmpty();
	int getSize();
	void getFront();
	~queue();
	
};
queue::queue()
{
	front=rear=NULL;
	size=0;
}
queue::~queue()
{
	cout<<"\n You out of the  queue "<<endl;
}

int queue::getSize()
{
	return size;
}

void queue::dequeue()
{
	if(isEmpty())
	{
		cout<<"\n the queue is empty "<<endl;
		return;
	}
	person *temp=new person();
	temp=front;
	front=front->next;
	delete temp;
	size--;
}
void queue::enqueue()

{
	  string na;
	  int id;
	  person *p=new person();
	  cout<<"enter your name ";
	  cin>>na;
	  p->name=na;
	  cout<<"\n enter age ";
	  cin>>id;
	  p->age=id;
	  p->next=NULL;
      if (isEmpty()) 
     {
       	front=rear=p;
     }
    
     person *temp=new person();
     temp=rear;
     temp->next=p;
     p=temp;

     size++;
    
}

bool queue::isEmpty()
{
	return size==0;
}
void queue::getFront()
{    
	if (isEmpty())
	{
		cout<<"\n The queue is empty ";
		return;
	}
	person * temp=new person;
	temp=front;
	cout<<"\n Name "<<temp->name;
	cout<<"\n Age  "<<temp->age;		

}