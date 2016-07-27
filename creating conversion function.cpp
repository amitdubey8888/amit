#include<iostream>
using namespace std;
const int size=100;
class stack{
	int stck[size];
	int top;
	public:
	stack()
	{
		top=0;
	}
	void push(int i);
	int pop();
	operator int()
	{
		return top;
	}
};
void stack::push(int i)
{
	if(top==size)
	{
		cout<<"Stack is full."<<endl;
		return;
	}
	stck[top]=i;
	top++;
}
int stack::pop()
{
	if(top==0)
	{
		cout<<"Stack is empty."<<endl;
		return 0;
	}
	top--;
	return stck[top];
}
int main()
{
	stack stck;
	int i,j;
	for(i=0;i<20;i++)
	{
		stck.push(i);
	}
	j=stck;
	cout<<j<<" Items on stack."<<endl;
	cout<<size-stck<<" Spaces open."<<endl;
	return 0;
}


