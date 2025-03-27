
using namespace std;
struct PatientNode
{
	patient p;
	PatientNode *next;
	
};

class queue
{
private:
	PatientNode * front;
	PatientNode *rear;
	int size;
public:
	queue();
	void enqueue(patient pa);
	void dequeue();
	//void getFront;
	bool isEmpty() const;
	void getSize();
	//~queue();
	
};

queue::queue()
{
front=rear=NULL;
size=0;
}
void queue::getSize()
{
	cout<<size;
}

void queue::dequeue()
{
	
	if (isEmpty())
	{
		cout<<"\n the queue is empty "<<endl;
	}
	
	PatientNode *temp=new PatientNode();
	temp=front->next;
	front =temp;
	delete temp;
	size--;

}
void queue::enqueue(patient pa)
{    

	PatientNode *temp=new PatientNode();
	temp->p=pa;
	temp->next=NULL;

	if(isEmpty())
	{
		front=rear=temp;
	}
	
	else
	{
     rear->next=temp;
     rear=temp;

	}
	  size++;
}
bool queue::isEmpty() const
{
	return size==0;
}

