//name :dhanashri thorat
//roll no:203
 //implement virtual funtion concept c++.



#include<stdio.h>
#include<iostream.h>
#include<conio.h>

 class game
 {
  public:
   game()
   {
  cout<<"in constructor"<<endl;
   }

   virtual void play()
    {
      cout<<"play game"<<endl;
    }
 };
 class cricket:public game
 {
   public:
   cricket()
     {
  cout<<"In constructor"<<endl;
   }
    void play()
    {
      cout<<"play game"<<endl;
    }
 };

   class tennis:public game
 {
   public:
   tennis()
     {
  cout<<"In constructor"<<endl;
   }
    void play()
    {
      cout<<"play game"<<endl;
    }
 };

  void main()
   {
     clrscr();
     game*ptr=new game;
     ptr->play();
     cricket c;
     ptr=&c;
     ptr->play();
     tennis t;
     ptr=&c;
     ptr->play();
     getch();

   }