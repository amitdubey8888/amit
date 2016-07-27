#include<iostream>
using namespace std;
void xtest(int test)
{
	try
	{
		if(test==0) throw test;
		if(test==1) throw 'a';
		if(test==2) throw 123.456;
		else throw "value is zero";
	}
	catch(...)
	{
		cout<<"Caught one!"<<endl;
	}
}
int main()
{
	cout<<"start"<<endl;
		xtest(0);
		xtest(1);
		xtest(2);
	cout << "End";
	return 0;
}

