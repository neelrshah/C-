#include<stdio.h>
#include<conio.h>
#include<iostream.h>

 class myclass
  {
    private:
    int num1, num2,result;

    public:
     void display()
      {
      cout<<num1<<endl<<num2<<endl;
      }
     void add()
      {
      result=num1+num2;
      cout<<"add="<<result<<endl;
      }
	 myclass()
      {
       cout<<"in constructor";
       num1=100 ;
       num2=200;
       }
  };
     void main()

     {
     clrscr();
     myclass m1;
     myclass m2;
     m1.display();
     m2.display();
     m1.add();
     m2.add();
     getch();
     }
