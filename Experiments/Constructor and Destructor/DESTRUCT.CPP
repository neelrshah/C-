
//exp=3
//program to implement drestructor


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
       ~myclass()
	{
	cout<<"in destructor"<<endl;
	getch();
	}
};
	void main()
	{
	clrscr();
	myclass m1;
	m1.disp();
	m1.add();
}


/*
in constructor
                                                                                
num1 is 100                                                                     
num2 is 200                                                                     
addition of two numbers is 300
in destructor                                                                   
                                                                                
*/
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
