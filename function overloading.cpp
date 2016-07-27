#include<iostream>
using namespace std;
double myfunc(double i);
int myfunc(int i);
int main()
{
	cout<<myfunc(10)<<" ";
	cout<<myfunc(5.4)<<endl;
	return 0;
}
double myfunc(double i)
{
	return i;
}
int myfunc(int i)
{
	return i;
}
