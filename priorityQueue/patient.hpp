
using namespace std;
class patient
{
private:
	string name;
	int caselevel;
public:
	void setName(string n);
	string getName();
	void setCaseLevel(int l);
	int getCaseLevel();
	void printInfo();
	patient();
	patient(string na,int c);
	// ~patient();

	
};
patient::patient(string na,int c)
{
	name=na;
	caselevel=c;
}
patient::patient()
{
	name="name ";
	caselevel=0;
}

void patient::printInfo()
{
  cout<<"\n Name of patient : "<<name<<endl;
  cout<<"\n curent status of patient : "<<caselevel<< endl;

}
void patient::setName(string n)
{
	name =n;
}
string patient::getName()
{
	return name;
}
void  patient::setCaseLevel(int l)
{
	caselevel=l;

}
int patient::getCaseLevel()
{
	return caselevel;
}

