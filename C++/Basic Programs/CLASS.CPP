#include<iostream.h>
#include<stdio.h>
#include<conio.h>
  class myclass
   {
    private:
    int num1;
    int num2;
    int num3;

       public:
	 void accept()
	  {
	   cout<<"enter the nos."<<endl;
	   cin>>num1>>num2;
	  }
	   void display()
	   {
	    cout<<"entered two numbers are:\n ";
	    cout<<num1<<num2<<endl;
	  }



      void add()
      {
       num3=num1+num2;
       cout<<"addition"<<num3;
       }
    };

    void main()
    {
     myclass m1;
     myclass m2;
     clrscr();
     m1.accept();
     m2.accept();
     m1.display();
     m2.display();
     m1.add();
     m2.add();
     getch();
    }