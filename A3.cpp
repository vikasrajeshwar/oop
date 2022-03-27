//Constructors
#include<iostream>

using namespace std;
class Demo
{
	public:
	int x;	//characteristics
	int y;
	
	Demo()
	{
		cout<<"Default constructor"<<"\n";
		x=0;
		y=0;
	}

	Demo(int i,int j)
	{
		cout<<"parameterised"<<"\n";
		x=i;
		y=j;
	}

	Demo( Demo &ref)//& means referance
	{
		cout<<"copy constructor"<<"\n";
	}
	
	~Demo()
	{
		cout<<"Destructor constructor"<<"\n";
		
	}	
	
};	

int main()
{
	Demo obj1;//Default constructor
	Demo obj2(11,21);//parameterised construct
	Demo obj3(9,6);
	
	cout<<sizeof(obj1)<<"\n";//8bytes
	cout<<sizeof(obj2)<<"\n";//8bytes
	
	cout<<"value of x"<<obj2.x<<"\n";//11
	
	obj2.x++;
	cout<<"value of x"<<obj2.x<<"\n";//12
	cout<<"value of x"<<obj3.x<<"\n";//9
	
	return 0;
}	