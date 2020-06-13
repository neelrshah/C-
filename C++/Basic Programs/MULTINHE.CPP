#include<conio.h>
#include<iostream.h>
 class grandparent
 {
  private:
    int numgp;
  public:
     grandparent()
     {
      numgp=100;
     }
  void disp1()
  {
   cout<<numgp<<endl;
  }
  };
   class parent:grandparent
 {
  private:
   int nump;
  public:
   parent()
   {
    nump=200;
   }
   void disp2()
   {
    cout<<nump<<endl;
    disp1();
   }
 };
 class child:parent
 {
  private:
  int numc;

  public:
   child()
  {
   numc=300;
  }
  void disp3()
  {
   cout<<numc<<endl;
   disp2();
  }
  };
  void main()
  {
   clrscr();
   child c1;
   child c2;
   c1.disp3();
   getch();
  }


