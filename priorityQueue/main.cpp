#include <iostream>
#include "queue.hpp"
#include "patient.hpp"
using namespace std;
int main(int argc, char const *argv[])
{
	patient p1("kebede",3); 
	p1.printInfo();
	queue q;
	q.enqueue(p1);
	q.getSize();
	// string patientName;
	// int level;
	// int choice;

	// do 
	// {
	// 	cout<<"\n 1.enter patient data into queue "<<endl;
	// 	cout<<"\n 2.remove patient data from the queue "<<endl;
	// 	cout<<"\n 3.number of patient in the queue "<<endl;
	// 	cout<<"\n 0.exit "<<endl;
	// 	cout<<"\n enter your choice :";
	// 	cin>>choice;

	// 	switch (choice)
	// 	{
	// 		case 1:
	// 		cout<<"\n enter you name: ";
			
	// 		cin>>patientName;
	// 		p1.setName(patientName);
	// 		cout<<"\n enter you case level : ";
			
	// 		cin>>level;
	// 		p1.setCaseLevel(level);
 //             q.enqueue(p1);
 //             break;

 //            case 2:
 //             q.dequeue();
 //             break;

 //            case 3:
 //             q.getSize();
 //             break;
	//         default:
	//         cout<<"\n please enter the correct choice"<<endl;
	
	// 	}
	// }while(choice!=0);

	return 0;
}