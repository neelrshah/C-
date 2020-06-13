
#include<iostream.h>
#include<stdio.h>
#include<conio.h>

class myclass
{
 private:
   int num;
 public:
   myclass()
     {
       cout<<"in myclass constructor"<<endl;
	num=100;
     }
      void disp1()
      {
	cout<<"no.in disp1"<<endl<<num;

      }
      friend void disp2(const myclass &);

};

  void disp2(const myclass &temp)
  {
    cout<<"num in disp2"<<endl;
    cout<<temp.num<<endl;

  }

  void main()
  {
     clrscr();

    myclass m1;
    m1.disp1();
    disp2(m1);
    getch();
  }