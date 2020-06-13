
//exp=3
//program to implement constructer


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
	cout<<"addition of two numbers is "<<result;
	}

	myclass()
	{
	cout<<"in constructor"<<endl;
	num1=100;
	num2=200;
	}
	 myclass(int x, int y)
  {
    num1=x;
    num2=y;

   }
};
void main()
{
	clrscr();
	myclass m1;
	myclass m2(100,300);
	m1.disp();
	m1.add();
	m2.disp();
	m2.add();

getch();
}


/*
in constructor
                                                                                
num1 is 100                                                                     
num2 is 200                                                                     
addition of two numbers is 300                                                  
num1 is 100                                                                     
num2 is 300                                                                     
addition of two numbers is 400                                                  
*/


                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
