#include<iostream>
using namespace std;
class base
{
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
class derived:private base
{
	int k;
	public:
	derived(int x)
	{
		k=x;
	}
	void showk()
	{
		cout<<k<<endl;
	}
};
int main()
{
	derived ob(3);
	ob.set(1,2);        //error can't access set()
	ob.show();          //error can't access show()
	ob.showk();
	return 0;
}
