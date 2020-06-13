
//EXP 12: FRIEND FUNCTION:GREATER NUMBER

#include<iostream.h>
#include<conio.h>

class one
{
   int a,b,c;
   public:
 void getdata();
 friend int largest(one obj);
}obj2;

void one::getdata()
{
   cout<<"\n\tENTER THREE NUMBERS\n";
   cin>>a>>b>>c;
}

int largest(one obj)
{
    int max;
    max=obj.a;
   if(obj.b>max)
   max=obj.b;
   if(obj.c>max)
  max=obj.c;
  return(max);
}


void main()
{
   int maxi;
   clrscr();
   cout<<"\n\tPROGRAM FOR FRIEND FUNCTION";
  obj2.getdata();
  maxi=largest(obj2);
  cout<<"\n\tLARGEST NO="<<maxi;
  getch();
}
/*


	PROGRAM FOR FRIEND FUNCTION
	ENTER THREE NUMBERS
1
23
43

	LARGEST NO=43
*/
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
