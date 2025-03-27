#include "linkedqueue.hpp"
#include <cstdlib>

int main()
{
	 
	 queue q;
	 int choice;

	 do {
	 	cout<<"\n 1.Add data into the queue "<<endl;
	    cout<<"\n 2.remove  data from  the queue "<<endl;
	 	cout<<"\n 3.get the front element  "<<endl;
	    cout<<"\n 4.current size of queue  "<<endl;
   	    cout<<"\n 0.Exit "<<endl;
   	    cout<<"\n Enter your choice ";
   	    cin>>choice;
   	    system("clear");
   	    switch(choice)
   	    {
   	    	case 1:
   	    	q.enqueue();
   	    	break;

   	    	case 2:
   	    	q.dequeue();
   	    	break;

   	    	case 3:
   	    	q.getFront();
            break;

   	    	case 4:
   	    	cout<<q.getSize();
   	    	break;

   	    	 default:
   	    	 cout<<"\n enter the correct option "<<endl;
   	    	 break;

   	    }

	 }while(choice!=0);

	return 0;
}