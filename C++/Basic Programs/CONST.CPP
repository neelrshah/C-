#include<conio.h>
#include<iostream.h>
 class myclass
 {
  private:
  int num1,num2,num3;
  public:
   void disp()
  {
   cout<<"entered numbers are="<<endl;
   cout<<num1<<endl<<num2<<endl;
  }
   void add()
  {
   num3=num1+num2;
   cout<<endl<<"addition of given numbers is"<<endl;
   cout<<num3;
  }
   myclass()
   {
    cout<<endl<<"indefault constructor"<<endl;
    num1=10;
    num2=20;
   }
  };
  void main()
  {
   myclass m1;
   myclass m2;
   clrscr();
   m1.disp();
   m2.disp();
   m1.add();
   m2.add();
   getch();
  }