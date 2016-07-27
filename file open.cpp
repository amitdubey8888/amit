#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream out("inventary");
	if(!out)
	{
		cout<<"Can not open inventary file."<<endl;
		return 1;
	}
	out<<"radius "<<39.95<<endl;
	out<<"toaster "<<19.95<<endl;
	out<<"mixer "<<24.34<<endl;
	out.close();
	return 0;
}
