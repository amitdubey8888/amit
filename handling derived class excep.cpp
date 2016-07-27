#include<iostream>
using namespace std;
class B{
};
class D:public B{
};
int main()
{
	D derived;
	try
	{
		throw derived;
	}
	catch(B b)
	{
		cout<<"Caught a base class."<<endl;
	}
	catch(D d)
	{
		cout<<"This wou't execute."<<endl;
	}
	return 0;
}
