#include<iostream>
using namespace std;
const int size=10;
template<class stacktype>
class stack
{
	stacktype stck[size];
	int top;
	public:
		stack() {top=0;}
		void push(stacktype ob);
		stacktype pop();
};
template <class stacktype>
void stack<stacktype>::push(stacktype ob)
{
	if(top==size)
	{
		cout<<"stack is full."<<endl;
		return;
	}
	stck[top]=ob;
	top++;
}
template <class stacktype>
stacktype stack<stacktype>::pop()
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
	stack<char>s1,s2;
	int i;
	s1.push('a');
	s2.push('x');
	s1.push('b');
	s2.push('y');
	s1.push('c');
	s2.push('z');
	for(i=0;i<3;i++) cout<<"pop s1:"<<s1.pop()<<endl;
	for(i=0;i<3;i++) cout<<"pop s2:"<<s2.pop()<<endl;
	stack<double>ds1,ds2;
	ds1.push(1.1);
	ds2.push(2.1);
	ds1.push(1.2);
	ds2.push(2.2);
	ds1.push(1.3);
	ds2.push(2.3);
	for(i=0;i<3;i++) cout<<"pop ds1:"<<ds1.pop()<<endl;
	for(i=0;i<3;i++) cout<<"pop ds2:"<<ds2.pop()<<endl;
	return 0;
	
}
