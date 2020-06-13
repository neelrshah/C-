#include<stdio.h>
#include<conio.h>
#include<iostream.h>
class parent
{
private:
	int num1;
public:
	parent()
	{
	cout<<"In parent construter"<<endl;
	num1=100;
	}
	void disp1()
	{
	cout<<num1<<endl;
	}
};
class child1:parent
{
private:
	int num2;
public:
	child1()
	{
	cout<<"In child1 construter"<<endl;
	num2=200;
	}
	void disp2()
	{
	cout<<num2<<endl;
	disp1();
	}
};
class child2:parent
{
private:
	int num3;
public:
	child2()
	{
	cout<<"In child2 construter"<<endl;
	num3=300;
	}
	void disp3()
	{
	cout<<num3<<endl;
	disp1();
	}
};
void main()
{
clrscr();
child1 c1;
child2 c2;

c1.disp2();
c2.disp3();
getch();
}