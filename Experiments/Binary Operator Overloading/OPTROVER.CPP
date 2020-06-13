
//EXP=7
//OPERATOR OVERLOADING(+)


#include<stdio.h>
#include<conio.h>
#include<iostream.h>

class myclass
{
	private:
	int num1;
	public:
	void disp()
	{
	cout<<endl<<"addition of two object is:"<<num1<<endl;
	}
	myclass()
	{
		num1=0;
	}
	myclass(int x)
	{
		num1=x;
	}

	myclass operator+(myclass & ref)
	{
		myclass temp;
		temp.num1=num1+ref.num1;
		return temp;
	}

};
void main()
{
	clrscr();
	myclass m1(10);
	myclass m2(20);
	myclass m3;
	m3=m1+m2;
	m3.disp();
getch();
}
/*
addition of two object is:30
*/
                                                                                

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                


