
//EXP=1:arithmetic operator using class


#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class arithmetic
{
	private:
	int num1,num2,result;
	public:
	void accept()
	{
		cout<<"enter two numbers "<<endl;
		cin>>num1>>num2;
	}
	void add()
	{
		result=num1+num2;
		cout<<"addition of two numbers is "<<result<<endl;
	}
	void sub()
	{
		result=num1-num2;
		cout<<"substraction of two numbers is: "<<result<<endl;
	}
	void multi()
	{
		result=num1*num2;
		cout<<"multiplication of two numbers is "<<result<<endl;
	}
	void div()
	{
		result=num1/num2;
		cout<<"division of two numbers is "<<result<<endl;
	}
	void mod()
	{
		result=num1%num2;
		cout<<"modlus of two numbers is "<<result<<endl;
	}
};
void main()
{

	int ch;
	clrscr();
	class arithmetic x;

	do
	{
	x.accept();
	cout<<"1:add 2:sub  3:multiplication  4:division  5:modulus 6:exit"<<endl;
	cout<<"enter your choice "<<endl;
	cin>>ch;
	switch(ch)
	{
		case 1:
		{
			x.add();
			break;
		}
		case 2:
		{
			x.sub();
			break;
		}
		case 3:
		{
			x.multi();
			break;
		}
		case 4:
		{
			x.div();
			break;
		}
		case 5:
		{
			x.mod();
			break;
		}
		case 6:
		{
			break;

		}
		default:
		cout<<"invalide choice";
		}

	}while(ch!=6);
	getch();
}
