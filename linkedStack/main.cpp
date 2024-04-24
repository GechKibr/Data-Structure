
#include "stack.hpp"
#include<cstdlib>
int main()
{
	
	int choice;
	LinkStack stack1;
	do{ cout<<"------------------------------------"<<endl;
		cout<<" 1. Add elements into stack(top)"<<endl;
		cout<<" 2. Print the nodes in side stack "<<endl;
		cout<<" 3. get top of node in side stack."<<endl;
		cout<<" 4. Remove the top element from stack."<<endl;
		cout<<" 0. exit ."<<endl;
		cout<<"------------------------------------"<<endl;
		cin>>choice;
		cout<<system("clear");
		switch(choice)
		{
           case 1:   
           stack1.push();
           break;
           case 2:
		   stack1.printStack();
           break;
		   case 3:
		   stack1.getTop();
		   break;
           case 4:
           stack1.pop();
           break;
		
           default :
           cout<<"exit."<<endl;
           break;
		}

		 

	}while(choice != 0);

	return 0;
}
