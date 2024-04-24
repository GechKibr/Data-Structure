#include <iostream>
using namespace std;
struct Student {
	string name;
	int id;
	Student *nextStudent;
	
};

class LinkStack {
  private:
   Student *top =NULL;

   public:
  // ~Student() { };
   void pop();
   void push();
   void printStack() const;
   void getTop() const ;
};

void LinkStack::getTop() const 
{
	Student *studnt =top;
	 if(studnt==NULL)
	 {
		cout<<"\n stack is empty "<<endl;
	 }
	 else
	 {

		cout<<"\n Name :"<<studnt->name <<"  ID :"<<studnt->id<<endl;
	 }
}

void LinkStack::pop()
{   
	Student *tempStud=top;
	if(tempStud==NULL)
	 cout<<" \n the stack  is empty"<<endl;
	else
	{
	top=top->nextStudent;
	delete tempStud;
	}
}

void LinkStack::printStack() const
{
	Student *temp = new Student;  
	temp=top;  //assign head node to new node

	cout<<"   Name   "<<"              ID number  "<<endl;
        while(temp !=NULL)
	{
		
	cout<<" "<<temp->name<<"             "<<temp->id<<endl;
		temp=temp->nextStudent;
	}	
}
void LinkStack::push()
{
   Student *newNode =new Student();   
   cout<<"enter yor name : ";
   cin>>newNode->name;
   cout<<"enter ID number : ";
   cin>>newNode->id;
   newNode->nextStudent=top;   //assign header to new nodes
   top=newNode;   // move the header

}
