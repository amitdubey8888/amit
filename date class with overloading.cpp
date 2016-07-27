#include<iostream>
using namespace std;
class date
{
	int day,month,year;
	public:
		date(char *d);
		date(int m,int d,int y);
		void show();
};
date::date(char *d)
{
	sscanf(d, "%d%*c%d%*c%d",&month,&day,&year);
}
date::date(int m,int d,int y)
{
	day=d;
	month=m;
	year=y;
}
void date::show()
{
	cout<<day<<"/"<<month<<"/"<<year<<endl;
}
int main()
{
	date ob(12,11,2015),oc("11/12/2015");
	ob.show();
	oc.show();
	return 0;
}
