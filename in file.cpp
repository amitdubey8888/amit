#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream in("inventary");
	if(!in)
	{
		cout<<"Can not open inventary file."<<endl;
		return 1;
	}
	char item[20];
	float cost;
	in>>item>>cost;
	cout<<item<<" "<<cost<<endl;
	in>>item>>cost;
	cout<<item<<" "<<cost<<endl;
	in>>item>>cost;
	cout<<item<<" "<<cost;
	in.close();
	return 0;
}
