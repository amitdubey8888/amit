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
		loc operator+(loc op2);
};
//overload + for loc
loc loc::operator+(loc op2)
{
	loc temp;
	temp.longitude=op2.longitude+longitude;
	temp.latitude=op2.latitude+latitude;
	return temp;
}
int main()
{
	loc ob1(1,2),ob2(3,4);
	ob1.show();
	ob2.show();
	ob1=ob1+ob2;
	ob1.show();
	return 0;
}
