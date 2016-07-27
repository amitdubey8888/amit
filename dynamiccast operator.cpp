#include<iostream>
using namespace std;
class base
{
	public:
		virtual void f()
		{
			cout<<"Inside Base"<<endl;
		}
};
class derived:public base
{
	public:
		void f()
		{
			cout<<"Inside Derived"<<endl;
		}
};
int main()
{
	base *bp,bob;
	derived *dp,dob;
	dp=dynamic_cast<derived *> (&dob);
	if(dp)
	{
		cout<<"Cast from derived * to derived * ok."<<endl<<endl;
		dp->f();
	}
	else cout<<"Error"<<endl;
	bp=dynamic_cast<base *> (&dob);
	if(bp)
	{
		cout<<"Cast from derived * to base * ok."<<endl<<endl;
		bp->f();
	}
	else cout<<"Error"<<endl<<endl;
	bp=dynamic_cast<base *> (&bob);
	if(bp)
	{
		cout<<"Cast from base * to base * ok."<<endl<<endl;
		bp->f();
	}
	else cout<<"Error"<<endl<<endl;
	dp=dynamic_cast<derived *> (&dob);
	if(dp)
	{
		cout<<"Error"<<endl;
	}
	else cout<<"Cast from derived * to base * not ok."<<endl;
	bp=&dob;
	dp=dynamic_cast<derived *> (bp);
	if(dp)
	{
		cout<<"Casting bp to a derived * ok."<<endl<<"Because bp is really pointing"<<endl<<"to a derived object."<<endl<<endl;
		dp->f();
	}
	else cout<<"Error"<<endl;
	cout<<endl;
	bp=&bob;
	dp=dynamic_cast<derived *> (bp);
	if(dp)
	{
		cout<<"Error"<<endl;
	}
	else
	{
		cout<<"Now casting bp to a derived \n"<<"is not ok because bp is really\n"<<"pointing to a base class."<<endl<<endl;
	}
	dp=&dob;
	bp=dynamic_cast<base *>(dp);
	if(bp)
	{
		cout<<"Casting dp to a base * is ok."<<endl;
		bp->f();
	}
	else cout<<"Error"<<endl;
	return 0;
}
