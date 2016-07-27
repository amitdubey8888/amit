#include<iostream>
using namespace std;
void divide(double a, double b);
int main()
{
	double i,j;
	do
	{
		cout<<"Enter numerator (o to stop) : ";
		cin>>i;
		cout<<"Enter denominator : ";
		cin>>j;
		divide(i,j);
	}while(i!=0);
	return 0;
}
void divide(double a,double b)
{
	try
	{
		if(!b) throw b;
		cout<<"Result : "<<a/b<<endl;
	}
	catch(double b)
	{
		cout<<"Can't divide by zero."<<endl;
	}
}
