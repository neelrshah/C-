
//EXP 19:TEMPLATE FUNCTION:SELECTION SORT

#include<iostream.h>
#include<conio.h>
template <class T>
void ssort(T a[],int n)
{
     int i,j;
     for(i=0;i<n;i++)
     {
	 for(j=i+1;j<n;j++)
	 {
	   if(a[j]<a[i])
	   {
	      T	t=a[i];
		a[i]=a[j];
		a[j]=t;
	   }
	}
     }
}


int main()
{
    int a[100],i,n;
    clrscr();
    cout<<"Enter The number of Element:\n";
    cin>>n;
    cout<<"\nEnter Elements:\n";
    for(i=0;i<n;i++)
    {
	cin>>a[i];
    }
    ssort(a,n);
    cout<<"\nAfter Sorting\n";
    for(i=0;i<n;i++)
    {
	cout<<a[i]<<"\t";
    }
    getch();
    return 0;
}
/*
Enter The number of Element:
5                                                                               
                                                                                
Enter Elements:                                                                 
12                                                                              
31                                                                              
23                                                                              
34                                                                              
54                                                                              
                                                                                
After Sorting                                                                   
12      23      31      34      54                                              
*/

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
