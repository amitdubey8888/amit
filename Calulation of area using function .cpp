#include<iostream>
void input1();
void input2();
void cal();
void output();
float len;
float wit;
float area;
using namespace std;
int main()
{

    input1();
	cout<<endl;
	input2();
	cout<<endl;
	cal();
	cout<<endl;
	output();
	return 0;
}
	void input1()
	{
		float x;
		while(1)
		{
		cout<<"Enter length of rectangle : ";
		cin>>x;
		if(x>0)
		{
			len=x;
			break;
		}
		else
		{
			cout<<"Negative value......Try again....."<<endl;
		}
	    }
	}
	void input2()
	{
        float y;
        while(1)
        {
		cout<<"Enter width of rectangle : ";
	    cin>>y;
	    if(y>0)
	    {
	    	wit=y;
	    	break;
		}
		else
		{
			cout<<"Negative value......Try again......"<<endl;
		}
	    }
	}
	void cal()
	{
		cout<<"Calculation is being performed...........";
		area=len*wit;
	}
	void output()
	{
		cout<<"Area of rectangle = "<<area;
	}
	






























