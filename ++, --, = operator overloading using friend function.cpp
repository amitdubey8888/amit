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
		friend loc operator++(loc &op);
		friend loc operator--(loc &op);
		loc operator=(loc op);
};
loc operator++(loc &op)
{
	op.longitude++;
	op.latitude++;
	return op;
}
loc operator--(loc &op)
{
	op.longitude--;
	op.latitude--;
	return op;
}
loc loc::operator=(loc op)
{
	longitude=op.longitude;
	latitude=op.latitude;
	return *this;
}
int main()
{
	loc ob1(1,2),ob2;
	ob1.show();
	++ob1;
	cout<<"After ++ operator overloading using friend function "<<endl;
	ob1.show();
	ob2=++ob1;
	ob2.show();
	--ob2;
	cout<<"After -- operator overloading using friend function "<<endl;
	ob2.show();
	return 0;
}
