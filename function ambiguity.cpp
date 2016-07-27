#include<iostream>
using namespace std;
void f(int x);
void f(int &x);
int main()
{
	int a=10;
	f(a);                 //error in this line i.e. which functiion u want to call
	return 0;
}
void f(int x)
{
	cout<<"In f(int )"<<endl;
}
void f(int &x)
{
	cout<<"In f(int &)"<<endl;
}
