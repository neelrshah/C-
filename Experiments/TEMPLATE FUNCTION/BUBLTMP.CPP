
//EXP 19:TEMPLATE FUNCTION :BUBBLE SORT

#include<conio.h>
#include<iostream.h>

template<class bubble>
void bsort(bubble a[], int n)
{
    int i, j;
    for(i=0;i<n-1;i++)
    {
	for(j=i+1;j<n;j++)
	{
	    if(a[i]>a[j])
	    {
		bubble tmp;
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
	    }
	}
    }
}

void main()
{
    int i,a[6];
    char b[4];
    clrscr();
    cout<<"enter the numbers:"<<endl;
    for(i=0;i<6;i++)
    {
	cin>>a[i];
    }
    bsort(a,6);
    cout<<"\nSorted Order Integers: "<<endl;
    for(i=0;i<6;i++)
	cout<<a[i]<<"\t";
    cout<<"enter the charcters:"<<endl;
    for(i=0;i<4;i++)
    {
	cin>>b[i];
    }
    bsort(b,4);

    cout<<"\nSorted Order Characters: "<<endl;
    for(int j=0;j<4;j++)
	cout<<b[j]<<"\t";
    getch();
}

/*
enter the numbers:
6                                                                               
2                                                                               
31                                                                              
4                                                                               
54                                                                              
34                                                                              
                                                                                
Sorted Order Integers: 2        4       6       31      34      54
enter the charcters:
g                                                                               
e                                                                               
a                                                                               
s
                                                                                
Sorted Order Characters:                                                        
a       e       g       s                                                       
*/
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
