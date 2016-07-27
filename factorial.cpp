#include<iostream>
using namespace std;
class area
{
	private : int x,fact;
	public :
		      area()
		      {
		      	fact=1;
			  }
	
	        int getdata()
	        {
	        	cout<<"Enter Number......"<<endl;
	        	cin>>x;
			}
	        int compute()
	        {
	        	for(int i=1;i<=x;i++)
	        	{
	        		fact=fact*i;
				}
			}
	        int display()
	        {
	        	cout<<" Factorial of number = "<<fact;
			}
	        
};

int main()
{
	area ob;
	ob.getdata();
	ob.compute();
	ob.display();
	return 0;
}
