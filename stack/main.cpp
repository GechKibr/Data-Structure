// implmentation of  stack using array 
#include"head.hpp"
#include<cstdlib>
int main()
{  
    Stack s1;   //create the object of stack class 
	int choice;
	cout<<"\n wellcome to Stack data structure \n";
	do{ 
		cout<<"1.Push elements into stack .\n";
		cout<<"2.Pop elements from stack.\n";
		cout<<"3.print stack elements .\n";
		cout<<"4.get the top elem.\n";
		cout<<"0.exit.\n";
		cin>>choice;
        cout<<system("clear");
      switch(choice)
      {
           case 1:
           s1.Push();   //to add elements in top of stack
           break;

          case 2:
          s1.Pop();  // to remove elements in top of stack
          break;

          case 3:
          s1.printStack();
          break;
          case 4:
          s1.getTop();
          break;
          default:
          break;
      
      }

	} while(choice!=0);

	return 0;
}