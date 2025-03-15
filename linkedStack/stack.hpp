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
   void pop();   //to remove the top stack 
   void push();   // to add from top of stack 
   void printStack() const;
   void getTop() const ;   // to read top of stack 
};

void LinkStack::getTop() const 
{
	Student *studnt =top;
	 if(studnt==NULL)
	 {
		cout<<"\n stack is empty "<<endl;
	 }
	 else
	 {   cout <<"\n The top element in side stack"<<endl;

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
	temp=top;  //assign top  node to new node

	cout<<"   Name   "<<"              ID number  "<<endl;
        while(temp !=NULL)
	{
		
	cout<<" "<<temp->name<<"             "<<temp->id<<endl;
		temp=temp->nextStudent;
	}	
}
void LinkStack::push()
{
   Student *newStudt =new Student();    // 
   cout<<"enter yor name : ";
   cin>>newStudt->name;
   cout<<"enter ID number : ";
   cin>>newStudt->id;
   newStudt->nextStudent=top;   //assign header to new nodes
   top=newStudt;   // move the header

}
