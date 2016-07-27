#include<iostream>
using namespace std;
int main()
{
	int *p,i;
	try{
		p=new int;   //allocate space for an int. We can allocate like as array p=new int[] & also initialise as p=new int(50)
	}
	catch (bad_alloc xa)
	{
		cout<<"Allocation failure"<<endl;
		return 1;
	}
	*p=100;                                                         //no need when initialise
                                                                    //for(i=0;i<10;i++) p[i]=i;               //use this code when array type                   
	                                                                //for(i=0;i<10;i++) cout<<p[i]<<" ";*
	cout<<"At "<<p<<" ";
	cout<<" is the value "<<*p<<endl;
	delete p;
	return 0;
}
