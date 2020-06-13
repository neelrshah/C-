#include<stdio.h>
#include<conio.h>
#include<iostream.h>

  class myclass

    private:
     int num1,num2,result;

     public:
     void display()

     {
      cout<<"entered numbers are";
      cout<<num1<<num2;
     }
      void add()
      {
	cout<<"addition";
	result=num1+num2;
	cout<<"result";
      }


       myclass()
       {
	 cout<<"In constructor";
	 num1=100;
	 num2=200;
       }

       myclass(int x,int y)
       {
	 num1=x;
	 num2=y;
       }
       ~myclass()
       {
	cout<<"In distructor";
	getch();

       }

	void main()
	{
	clrscr();
	 myclass m1;
	 myclass m2;
	 m1.display();
	 m2.display();
	 m1.add();
	 m2.add();

	 myclass *ptr=new myclass;
	 ptr->display();
	 (*ptr).display();
	 delete ptr;
	 getch();
	 }
