#include<iostream>
using namespace std;
class power
{
	int x;
	public:
		power() {x=0;}
		power(int n) {x=n;}
		int getx() {return x;}
		void setx(int i) {x=i;}		
};
int main()
{
	power two[]={1,2,3,4,5};
	power three[5];
	power *p;
	int i;
	cout<<"Power of two: ";
	for(i=0;i<5;i++)
	{
		cout<<two[i].getx()<<" ";
	}
	cout<<endl<<endl;
	three[0].setx(1);
	three[1].setx(2);
	three[3].setx(3);
	three[4].setx(4);
	three[5].setx(5);
	cout<<"Power of three: ";
	for(i=0;i<5;i++)
	{
	cout<<three[i].getx()<<" ";
    }
    cout<<endl<<endl;
    try
    {
    	p=new power[5];
	}
	catch(bad_alloc xa)
	{
		cout<<"Allocation failure"<<endl;
		return 1;
	}
	for(i=0;i<5;i++)
	{
		p[i].setx(two[i].getx());
	}
	cout<<"Power of two: ";
	for(i=0;i<5;i++)
	{
		cout<<p[i].getx()<<" ";
	}
	cout<<endl<<endl;
	delete [] p;
	return 0;
}
