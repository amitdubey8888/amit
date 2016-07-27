#include<iostream>
#include<cstring>
using namespace std;
class balance
{
	double curbal;
	char name[100];
	public:
	/*balance(double n, char *s)
	{
		curbal=n;
		strcpy(name, s);
	}
	balance() {}
	~balance() 
	{
		cout<<"Destructing :";
		cout<<name<<endl;
	}*/
	void setbal(double n, char *s)
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
	int i;
	try
	{
		p=new balance [3];
	}
	catch(bad_alloc xa)
	{
		cout<<"Allocation failure"<<endl;
		return 1;
	}
	p[0].setbal(12387.87, "Amit Dubey");
	p[1].setbal(12345.25, "Rohit Ranjan");
	p[2].setbal(12234.11, "Mohit Mathur");
	for(i=0;i<3;i++)
	{
		p[i].getbal(n,s);
     	cout<<s<<"'s balance is : "<<n;
	    cout<<endl;
	}
	delete [] p;
	return 0;
}
