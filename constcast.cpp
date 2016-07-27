#include<iostream>
using namespace std;
void sqrval(const int *val)
{
	int *p;
	p=const_cast<int *> (val);
	*p=*val * *val;
}
int main()
{
	int x=10;
	cout<<"X before call: "<<x<<endl;
	sqrval(&x);
	cout<<"X after call: "<<x<<endl;
	return 0;
}
