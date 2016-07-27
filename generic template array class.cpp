#include<iostream>
using namespace std;
const int size=10;
template <class atype>
class type
{
	atype a[size];
	public:
		type()
		{
			register int i;
			for(i=0;i<size;i++)
				a[i]=i;
		}
		atype &operator[](int i);
};
template <class atype>
	atype &type<atype>::operator[](int i)
	{
		if(i<0 || i>size-1)
		{
			cout<<"Index value of ";
			cout<<i<<"  is out of bound."<<endl;
			exit(1);
		}
		return a[i];
	}
int main()
{
	type<int> intob;
	type<double> doubleob;
	int i;
	cout<<"Integer array: ";
	for(i=0;i<size;i++) intob[i]=i;
	for(i=0;i<size;i++) cout<<intob[i]<<" ";
	cout<<endl;
	cout<<"Double array: ";
	for(i=0;i<size;i++) doubleob[i]=(double)i/3;
	for(i=0;i<size;i++) cout<<doubleob[i]<<" ";
	cout<<endl;
	intob[12]=100;
	return 0;
}
