
//EXP 8:SINGLE INHERITANCE 4

#include<iostream.h>
#include<conio.h>
class  parent
{
	private:
	int nump,numa;
	public:
	parent()
	{
		nump=100;
		numa=150;
		cout<<"in constructor: nump="<<nump<<endl;
		cout<<"in constructor: numa="<<numa<<endl;

	}
	void disp1()
	{
		cout<<"number in parent class is:"<<nump<<endl;
	}
	protected:
	void disp3()
	{
		cout<<"number present in protected of parent class is:"<<numa<<endl;
	}
};

class child:protected parent
{
	private:
	int numc;
	public:
	child()
	{
		numc=200;
		cout<<"in constructor:numc="<<numc<<endl;

	}
	void disp2()
	{
		cout<<"number in child class is:"<<numc<<endl;
		disp1();
		disp4();


	}

	protected:
	void disp4()
	{
		disp3();
	}
};

void main()
{
	clrscr();
	child c1;
	c1.disp2();
	getch();
}  
/*
in constructor: nump=100
in constructor: numa=150                                                        
in constructor:numc=200                                                         
number in child class is:200                                                    
number in parent class is:100                                                   
number present in protected of parent class is:150                              
*/
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                







