#include<conio.h>
#include<iostream.h>
class myclass
{
   private:
   int num1;
   public:
   myclass()
   {
      num1=0;
   }
   void disp()
   {
      cout<<"given no. is num1"<<num1;
   }
   myclass(int x)
   {
   num1=x;
   }
   ~myclass()
   {
   cout<<"in destructor";
   }
    myclass operator+(myclass &ref)
   {
    myclass temp;
    temp.num1=num1+ref.num1;
    return(temp.num1);
    }
    };
   void main()
   {
   myclass m1(100);
   myclass m2(200);
   myclass m3;
   clrscr();
   m1.disp();
   m2.disp();
   m3=m1+m2;
   m3.disp();
   getch();
   }
