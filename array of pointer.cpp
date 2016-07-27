#include<iostream>
using namespace std;
class c1
{
	int h;
	int i;
	public:
		c1(int j, int k) { h=j; i=k;}
        int geti() {return i;}
        int geth() {return h;}
};
int main()
{
	c1 ob[3]={ c1(1,2),c1(3,4),c1(5,6)};
	int i;
	for(i=0;i<3;i++)
	{
		cout<<ob[i].geth();
		cout<<", ";
		cout<<ob[i].geti()<<endl;
	}
	return 0;
}
