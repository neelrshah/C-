
//exp=4
//Title-Function overloading..


#include<iostream.h>
#include<conio.h>

int sum(int, int);
float sum(float, float);
float sum(int, float);

void main()
{
   int num1, num2, x;
   float num3, num4, y;
   clrscr();
       cout<<"Enter two integer numbers: ";
       cin>>num1>>num2;
       cout<<"Result: "<<sum(num1, num2)<< endl;


       cout<<"Enter two float numbers: ";
       cin>>num3>>num4;
       cout<<"Result: " <<sum(num3, num4)<< endl;

       cout<<"Enter one int and one float number: ";
       cin>>x>>y;
       cout<<"Result: " <<sum(x, y)<< endl;

   getch();
}
   int sum(int a, int b)
      {
	 return a+b;
      }


   float sum(float a, float b)
      {
	 return a+b;
      }


   float sum(int a, float b)
      {
	 return a+b;
      }


  /*
  Enter two integer numbers: 3
4                                                                               
Result: 7                                                                       
Enter two float numbers: 1.1                                                    
2.1                                                                             
Result: 3.2                                                                     
Enter one int and one float number: 1                                           
5.6                                                                             
Result: 6.6                                                                     
                                                                                
*/
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
