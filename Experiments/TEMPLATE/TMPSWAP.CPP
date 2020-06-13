
//EXP 16:TEMPLATE:SWAPING

#include<iostream.h>
#include<conio.h>
template <class T>
void swap(T&a,T&b)
{
    T temp=a;
    a=b;
    b=temp;
}
void main()
{
	clrscr();
    int x1=4,y1=7;
    float x2=4.5,y2=7.5;

    cout<<"Before Swap:"<<endl;
    cout<<"x1="<<x1<<endl<<"y1="<<y1<<endl;
    cout<<"x2="<<x2<<endl<<"y2="<<y2<<endl;

    swap(x1,y1);
    swap(x2,y2);

    cout<<"After Swap:"<<endl;
    cout<<"x1="<<x1<<endl<<"y1="<<y1<<endl;
    cout<<"x2="<<x2<<endl<<"y2="<<y2<<endl;

     getch();

}
/*OUTPUT :
Before Swap:
x1=4
y1=7
x2=4.5
y2=7.5
After Swap:
x1=7
y1=4
x2=7.5
y2=4.5
*/
