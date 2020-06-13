
//EXP 9:MULTIPLE INHERITANCE

#include<iostream.h>
#include<conio.h>

class parent1
{
private:
	int nump1;
public:
	parent1()
	{
	cout<<"in parent1 constructor"<<endl;
	nump1=100;
	}

	void disp1()
	{
		cout<<nump1<<endl;
	}

};

class parent2
{
private:
	int nump2;
public:
	parent2()
	{
		cout<<"in parent2 constructor"<<endl;
		nump2=200;
	}

	void disp2()
	{
		cout<<nump2<<endl;
	      //	disp1();
	}

};


class child:public parent1,protected parent2
{
private:
	int numc;
public:
	child()
	{
		cout<<"in child constructor"<<endl;
		numc=400;
	}

	void disp3()
	{
		cout<<numc<<endl;
		//disp1();
		disp2();
	}

};

void main()
{
clrscr();
child c1;
//child2 c2;
c1.disp1();
c1.disp3();
//c1.disp2();

getch();
}
/*
in parent1 constructor
in parent2 constructor                                                          
in child constructor                                                            
100                                                                             
400                                                                             
200                                                                             
*/in parent1 constructor
in parent2 constructor                                                          
in child constructor                                                            
100                                                                             
400                                                                             
200                                                                             
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
