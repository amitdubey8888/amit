#include<iostream>
#include<cstring>
using namespace std;
class myexception
{
	public:
		char strwhat[10];
		int what;
		myexception() 
		{
			*strwhat=0;
			what=0;
		}
		myexception(char *s, int e)
		{
			strcpy(strwhat,s);
			what=e;
		}
};
int main()
{
	int i;
	try
	{
		cout<<"Enter a positive number: ";
		cin>>i;
		if(i<0)
		{
			throw myexception("Not positive",i);
		}
 	}
		catch(myexception e)
		{
			cout<<e.strwhat<<":";
			cout<<e.what<<endl;
		}
	return 0;
}
