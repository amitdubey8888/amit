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
		friend loc operator+(loc op1, loc op2);
		loc operator-(loc op2);
		loc operator=(loc op2);
		loc operator++();
};
loc operator+(loc op1, loc op2)
{
	loc temp;
	temp.longitude=op1.longitude+op2.longitude;
	temp.latitude=op1.latitude+op2.latitude;
	return temp;
}
loc loc::operator-(loc op2)
{
	loc temp;
	temp.longitude=longitude-op2.longitude;
	temp.latitude=latitude-op2.latitude;
	return temp;
}
loc loc::operator=(loc op2)
{
	longitude=op2.longitude;
	latitude=op2.latitude;
	return *this;
}
loc loc::operator++()
{
	longitude++;
	latitude++;
	return *this;
}
int main()
{
	loc ob1(1,2),ob2(3,4);
	ob1.show();
	ob2.show();
	cout<<"After + operator overloading using friend function "<<endl;
	ob1=ob1+ob2;
	ob1.show();
	ob1=ob1-ob2;
	cout<<"After - operator overloading"<<endl;
	ob1.show();
	++ob1;
	++ob2;
	cout<<"After ++ operator overloading"<<endl;
	ob1.show();
	ob2.show();
	cout<<"After = operator overloading"<<endl;
	ob1=ob2;
	ob1.show();
	ob2=ob1;
	ob2.show();
	return 0;
}
