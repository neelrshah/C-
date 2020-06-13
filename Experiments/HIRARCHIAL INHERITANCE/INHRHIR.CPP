
//EXP 10:HIRARCHIAL INHERITANCE

#include<iostream.h>
#include<conio.h>

class parent
{
private:
	int nump;
public:
	parent()
	{
	cout<<"in parent constructor"<<endl;
	nump=100;
	}

	void disp1()
	{
		cout<<nump<<endl;
	}

};

class child1: parent
{
private:
	int numc;
public:
	child1()
	{
		cout<<"in child1 constructor"<<endl;
		numc=200;
	}

	void disp2()
	{
		cout<<numc<<endl;
		disp1();
	}

};


class child2:public parent
{
private:
	int numc2;
public:
	child2()
	{
		cout<<"in child2 constructor"<<endl;
		numc2=400;
	}

	void disp3()
	{
		cout<<numc2<<endl;
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
/*
in parent constructor
in child1 constructor                                                           
in parent constructor                                                           
in child2 constructor                                                           
200                                                                             
100                                                                             
400                                                                             
100                                                                             
*/
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
