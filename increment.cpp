#include<iostream>
using namespace std;
class overload
{
	private : int x;
	public : 
	int enter()
	{
		cout<<"Enter value of x......"<<endl;
		cin>>x;
	}
	int display()
	{
		cout<<"Overloaded value ="<<x;
	}
	int operator++()
	{
		x++;
	}
};
int main()
{
	overload oa;
	oa.enter();
	++oa;
	oa.display();
	return 0;
}
