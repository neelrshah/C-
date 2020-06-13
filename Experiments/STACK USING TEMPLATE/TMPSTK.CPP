
//EXP 21:TEMPLETE :STACK

#include<iostream.h>
#include<conio.h>

template<class t>

class array
{
private:
    t a[5];
    int i;
    int top;
public:
    array()
    {
	top=-1;
    }
    t push()
    {
	if(top==4)
	{
	    cout<<"stack overflow"<<endl;
	}
	else
	{
	   cout<<"enter the data in stack"<<endl;
	   top=top+1;
	   cin>>a[top];
	   cout<<"pushed data is:"<<a[top]<<endl;
	}
	return 0;
    }

    t pop()
    {
	if(top==-1)
	{
	    cout<<"stack is empty"<<endl;
	}
	else
	{
	    cout<<"pop data is";
	    cout<<a[top];
	    top=top-1;
	}
	return 0;
    }

    t traverse()
    {
	if(top==-1)
	{
	    cout<<"stack is empty"<<endl;
	}
	else
	{
	    for(i=0;i<=top;i++)
	    {
		cout<<a[i]<<"\t";
	    }
	}
	return 0;
    }
};

void main()
{
    int ch,ch1;
    clrscr();
    array <char>a2;
    array <int>a1;
    cout<<"1.INTEGER\n2.CHARACTER\n3.EXIT\n";
    cin>>ch1;
    switch(ch1)
    {
	case 1:
	do
    {
    cout<<"\n1.PUSH\n2.POP\n3.TRAVERSE.\n4.EXIT\n";
    cout<<"enter your choice"<<endl;
    cin>>ch;
    switch(ch)
    {
    case 1:
	cout<<"enter data  in integer stack"<<endl;
	a1.push();
	break;

    case 2:

	 a1.pop();
	 break;

    case 3:
	a1.traverse();
	break;
    case 4:
	break;

    default:
	cout<<"error occurred"<<endl;
    }
    }while(ch!=4);
	case 2:
	do
    {
    cout<<"\n1.PUSH\n2.POP\n3.TRAVERSE.\n4.EXIT\n";
    cout<<"enter your choice"<<endl;
    cin>>ch;
    switch(ch)
    {
    case 1:
	cout<<"enter data  in character stack"<<endl;
	a2.push();
	break;

    case 2:

	 a2.pop();
	 break;

    case 3:
	a2.traverse();
	break;
    case 4:
	break;

    default:
	cout<<"error occurred"<<endl;
    }
    }while(ch!=4);

    }


}
