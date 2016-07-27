#include<iostream>
#include<cstring>
using namespace std;
class balance
{
	double curbal;
	char name[100];
	public:
	void set(double n, char *s)
	{
		curbal=n;
		strcpy(name, s);
	}
	void getbal(double &n, char *s)
	{
		n=curbal;
		strcpy(s,name);
	}
};
int main()
{
	balance *p;
	char s[100];
	double n;
	try
	{
		p=new balance;
	}
	catch(bad_alloc xa)
	{
		cout<<"Allocation failure"<<endl;
		return 1;
	}
	p->set(12387.87, "Amit Dubey");
	p->getbal(n,s);
	cout<<s<<"'s balance is : "<<n;
	cout<<endl;
	delete p;
	return 0;
}
