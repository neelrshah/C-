
//EXP 15 :virtual class

#include<iostream.h>
#include<conio.h>

class grandparent
{
private:
	int numgp;
public:
	grandparent()
	{
	cout<<"in grandparent constructor"<<endl;
	numgp=100;
	}

	void disp1()
	{
		cout<<"in disp1 numgp="<<numgp<<endl;
	}

};

class parent1:virtual public grandparent
{
private:
	int nump1;
public:
	parent1()
	{
		cout<<"in parent1 constructor"<<endl;
		nump1=200;
	}

	void disp2()
	{
		cout<<"in disp2 nump1="<<nump1<<endl;
	       //	disp1();
	}

};


class parent2:virtual public grandparent
{
private:
	int nump2;
public:
	parent2()
	{
		cout<<"in parent2 constructor"<<endl;
		nump2=300;
	}

	void disp3()
	{
		cout<<"in disp3 nump2="<<nump2<<endl;
	     //	disp1();
	}

};
class child:public parent1,public parent2
{
private:
	int numc;
public:
	child()
	{
		cout<<"in child constructor"<<endl;
		numc=400;
	}

	void disp4()
	{
		cout<<"in disp4 numc="<<numc<<endl;
	     //	disp1();
	}

};

void main()
{
child c;
c.disp1();
c.disp2();
c.disp3();
c.disp4();
getch();

}
/*
in grandparent constructor
in parent1 constructor                                                          
in parent2 constructor                                                          
in child constructor                                                            
in disp1 numgp=100                                                              
in disp2 nump1=200                                                              
in disp3 nump2=300                                                              
in disp4 numc=400
*/
                                                                                
                                                                                
                                                                                
