#include<iostream>
using namespace std;
int main()
{
	int p,q,x,y,a;
	while(1)
	{
		cout<<"Enter 1 for exit......"<<endl;
		cout<<"Enter any other key to continue......"<<endl;
		cin>>a;
		if(a!=1)
	    {
		
	    cout<<"Enter value of x & y......."<<endl;
    	cin>>x>>y;
	    p=(x/y);
	    q=(x%y);
	    cout<<"Quotient = "<<p<<"         "<<" Remainder "<<q<<endl;;
        }
	    else if (a==1)
	    {
		break;
	    }
    }
}
