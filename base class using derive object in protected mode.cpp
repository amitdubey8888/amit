#include<iostream>
using namespace std;
class base
{
	protected:
	int i,j;
	public:
		void set(int a, int b)
		{
			i=a;
			j=b;
		}
		void show()
		{
			cout<<i<<" "<<j<<endl;
		}
};
class derived:public base
{
	int k;
	public:
	void setk()
	{
		k=i*j;
	}
	void showk()
	{
		cout<<k<<endl;
	}
};
int main()
{
	derived ob;
	ob.set(1,2);        //error can't access set()
	ob.show();
	ob.setk();          //error can't access show()
	ob.showk();
	return 0;
}
