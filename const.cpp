#include<iostream>
using namespace std;
class demo
{
	mutable int i;                               //now this can be modified by using mutable
	public:
		int geti() const
		{
			return i;
		}
		void seti(int x) const
		{
			i=x;
		}
};
int main()
{
	demo ob;
	ob.seti(100);
	cout<<ob.geti();
	return 0;
}

