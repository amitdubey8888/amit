#include<iostream>
using namespace std;
class loc
{
	int longitude,latitude;
	public:
		loc() {}
		loc(int i,int j)
		{
			longitude=i;
			latitude=j;
		}
		void show()
		{
			cout<<longitude<<" ";
			cout<<latitude<<endl;
		}
		friend loc operator+(loc op1, int op2);
		friend loc operator+(int op1, loc op2);
};
loc operator+(loc op1, int op2)
{
	loc temp;
	temp.longitude=op1.longitude+op2;
	temp.latitude=op1.latitude+op2;
	return temp;
}
loc operator+(int op1, loc op2)
{
	loc temp;
	temp.longitude=op1+op2.longitude;
	temp.latitude=op1+op2.latitude;
	return temp;
}
int main()
{
	loc ob1(1,2),ob2(3,4),ob3(5,6);
	ob1.show();
	ob2.show();
	ob3.show();
	ob1=ob2+10;
	ob3=10+ob2;
	ob1.show();
	ob3.show();
	return 0;
}
