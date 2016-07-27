#include<iostream>
using namespace std;
template<class x> 
void swapargs(x &a, x &b)
{
	x temp;
	temp=a;
	a=b;
	b=temp;
}
int main()
{
	int i=10,j=20;
	double x=10.1,y=20.2;
	char a='x',b='y';
	cout<<"original i, j:"<<i<<" "<<j<<endl;
	cout<<"original x, y:"<<x<<" "<<y<<endl;
	cout<<"original a, b:"<<a<<" "<<b<<endl;
	swapargs(i,j);
	swapargs(x,y);
	swapargs(a,b);
	cout<<"swaped i, j:"<<i<<" "<<j<<endl;
	cout<<"swaped x, y:"<<x<<" "<<y<<endl;
	cout<<"swaped a, b:"<<a<<" "<<b<<endl;
	return 0;
}
