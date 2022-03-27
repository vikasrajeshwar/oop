//Design and evaluation book
//thinking process c++ volitle 2

#include<iostream>

using namespace std;


class Arithmatic
{
	public:
	//characteristics
	int ino1;
	int ino2;
	
	
	//Behaviour
	Arithmatic()//constructor
	{
		cout<<"inside constructor\n";
		ino1=0;
		ino2=0;		
	}

	Arithmatic(int A,int B)//parameter constructor
	{
		cout<<"inside parameter constructor\n";
		ino1=A;
		ino2=B;
	}	
	
	~Arithmatic()//Destructor
	{
		cout<<"Destructor\n";
	}	
	int Addition()
	{
		int iAns=0;
		iAns=ino1+ino2;
		return iAns;
	}

	int Subtraction()
	{
		int iAns=0;
		iAns=ino1-ino2;
		return iAns;
	}	
};
	
int main()
{
	
	int ivalue=0,ivalue2=0,iret=0;
	
	cout<<"enter first number";
	cin>>ivalue;
	
	cout<<"enter Second number";
	cin>>ivalue2;
	
	Arithmatic Aobj;
	Arithmatic Bobj(ivalue,ivalue2);
	
	iret=Bobj.Addition();
	cout<<"Addition is"<<iret<<"\n";
	
	//iret=Bobj.Subtraction();
	//cout<<"subtraction is"<<iret<<"\n";
	
	return 0;
}	