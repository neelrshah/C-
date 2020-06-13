#include<stdio.h>
#include<conio.h>
#include<iostream.h>

class myclass
{
 private:
 int num1,num2,result;
 public:
 void disp()

 {
 cout<<"entred nos. are"<<endl;
 cout<<num1<<num2<<endl;
 }
  void add()
  {
  cout<<"addtion"<<endl;
  result=num1+num2;
  cout<<"result";
  }
  myclass()
  {
  cout<<"in constructor";
  num1=100;
  num2=200;
  }
  myclass(int x,int y)
  {
  num1=x;
  num2=y;
  }
  myclass (myclass &)

  {
  cout<<"in constructor";
  num1=10;
  num2=20;
  }

};
 void main()
 {
   clrscr();
   myclass.m1;
   myclass.m2;
   m1.disp();
   m2.disp();
   m1.add();
   m2.add();
   getch();
 }