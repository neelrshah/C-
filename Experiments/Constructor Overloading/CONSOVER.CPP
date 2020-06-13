
//EXP=5
//CONSTRUCTOR OVERLOADING


#include<stdio.h>
#include<conio.h>
#include<iostream.h>

class myclass
{
	private:
	int num1, num2,result;
	public:
	void disp()
	{
	cout<<endl<<"num1 is "<<num1<<endl<<"num2 is "<<num2<<endl;
	}
	void add()
	{
	result=num1+num2;
	cout<<"addition of two numbers is "<<result<<endl;
	}

	myclass()
	{
	cout<<"in constructor"<<endl;
	num1=100;
	num2=200;
	}
	 myclass(int x, int y)
	{
	 cout<<"in parameterised constructor"<<endl;
	 num1=x;
	 num2=y;
	}
	myclass(myclass & ref)
	{
	 cout<<"In copy Contructor"<<endl;
	 num1=ref.num1;
	 num2=ref.num2;
	}

};
void main()
{
	clrscr();
	myclass m1;
	m1.disp();
	m1.add();
	myclass m2(100,300);
	m2.disp();
	m2.add();
	myclass m3=m1;
	m3.disp();
	m3.add();

getch();
}
/*
in constructor

num1 is 100
num2 is 200
addition of two numbers is 300
in parameterised constructor

num1 is 100
num2 is 300
addition of two numbers is 400
In copy Contructor

num1 is 100
num2 is 200
addition of two numbers is 300

*/







                                                                                


