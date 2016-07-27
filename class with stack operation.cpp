#include<iostream>
using namespace std;
#define SIZE 100
class stack
{
	int stack[SIZE];
	int top;
	public:
		void init();
		void push(int i);
		int pop();
};
void stack::init()
{
	top=0;
}
void stack::push(int i)
{
	if(top==SIZE)
	{
		cout<<"Stack overflow."<<endl;
		return;
	}
	stack[top]=i;
	top++;
}
int stack::pop()
{
	if(top==0)
	{
		cout<<"Stack Underflow."<<endl;
		return 0;
	}
	top--;
	return stack[top];
}
int main()
{
	stack stack1,stack2;
	stack1.init();
	stack2.init();
	
	stack1.push(1);
	stack2.push(2);
	
	stack1.push(3);
	stack2.push(4);
	
	cout<<stack1.pop()<<endl;
	cout<<stack1.pop()<<endl;
	cout<<stack2.pop()<<endl;
	cout<<stack2.pop()<<endl;
	return 0;
}
