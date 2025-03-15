#include<iostream>

using namespace std;
#define max 10    //the maximum size of stack
struct  Node
{
	string name;
	int id;
	
};


class Stack
{  
private:
	Node items[max];
	int top=-1;
	int size=0;
public:
	bool isFull() const;
	bool isEmpty() const;
	void Push();
	void Pop();
	void getTop() const;
	void printStack();
};
  void Stack::getTop() const
{
	cout<<"\n the top element the stack is :"<<endl;
	cout <<" name :"<<items[top].name<<endl;
	cout<<"ID :"<<items[top].id<<endl;

	 
}

bool Stack::isFull() const
{
	if(top==max-1)
	{
		return true;
	}
	else
		return false;
}
bool Stack::isEmpty() const
{
	if(top==-1)
	{
		return true;
	}
	else
		return false;
}

void Stack::Push()
{    
	if(isFull())
	{
		cout<<"\n stack is full ."<<endl;
	}
	else
	{
		Node newItem; 
	    cout<<"\n Enter  name  :";
		cin>>newItem.name;

		cout<<"\n Enter ID  :";
		cin>>newItem.id;
	    top++;
        items[top]=newItem;
        size++;
	}
}

void Stack::Pop()
{
	if(isEmpty())
	{
		cout<<"Stack is empty "<<endl;
	}
	else
	{   
		//Node popIteam;
		cout<<" poped element "<<endl;
		cout<<" "<<items[size].name<<"  "<<items[size].id<<endl;
		top--;
		size--;
	}
}


void Stack::printStack()
{
	
	if(isEmpty()){
	cout<<"Empty Stack ,no list ."<<endl;	
	}


  else {
		for(int i=size;i<=0;i++)
		{
			cout<<endl<<items[i].name<<"   "<<items[i].id<<endl;
	
		}
	}
}

