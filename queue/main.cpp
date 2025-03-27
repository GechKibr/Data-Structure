#include<cstdlib>
#include <string>
#include"queue.hpp"
int main()
{
 Myqueue m1;
 int choice;
 int num;
 do {
    cout<<"\n 1.enque operations "<<endl;
    cout<<"\n 2.deque operations "<<endl;
    cout<<"\n 3.display the queue  "<<endl;
    cout<<"\n 4.get the front element "<<endl;
    cout<<"\n 0.exit."<<endl;
    cout<<"\n enter your choice : ";
    cin>>choice;
    system("clear");
 switch (choice)
 {
   case 1:
   try{
    cout<<"\n enter the number ";
    cin>>num;
    m1.enqueue(num);
   }
     catch (const out_of_range& e) {
        cerr << "Invalid input: '" << num << "' is out of range for an integer." << endl;
    }
    break;
   case 2:
     m1.dequeue();
     break;
   case 3: 
    m1.display();
     break;
     case 4:
     m1.getFront();
     break;
     default:
     cout<<"\n please enter the the correct number with the above list"<<endl;
 
 } 
   }while(choice!=0);
 


    return 0;
}
