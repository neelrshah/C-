
//EXP 6:UNAIRY OPERATOR OVERLOADING(++)


#include<iostream.h>
#include<conio.h>
class myclass
	      {
	      private:
		     int num1,temp;
	      public:
		     myclass()
		     {
		     num1=0;
		     }
		     myclass(int x)
		     {
		     num1=x;
		     }
		     void disp1()
			     {
			      cout<<"entered number is:"<<num1<<endl;
			     }
		     myclass operator ++()
				      {
				      num1=++num1;
				      return(num1);
				      }
		      void disp2()
			       {
				cout<<"incremented number is:"<<num1<<endl;
			       }
		  };

void main()
	{
	 clrscr();
	 myclass m1(50);
	 m1.disp1();
	 ++m1;
	 m1.disp2();
	 getch();
	 }
/*
entered number is:50
incremented number is:51                                                        
*/
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
