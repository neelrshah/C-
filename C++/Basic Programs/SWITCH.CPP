// name= neel shah
// c program to demonstrate arithematic operators using switch case

#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
	int num1,num2,result,ch;
	clrscr();
	cout<<"enter two numbers "<<endl;
	cin>>num1>>num2;
	do
	{
	cout<<"1:add 2:sub  3:multiplication  4:division  5:modulus 6:exit"<<endl;
	cout<<"enter your choice "<<endl;
	cin>>ch;
	switch(ch)
	{
		case 1:
		{
			result=num1+num2;
			cout<<"addition of two numbers is "<<result<<endl;
			break;
		}
		case 2:
		{
			result=num1-num2;
			cout<<"substraction of two numbers is "<<result<<endl;
			break;
		}
		case 3:
		{
			result=num1*num2;
			cout<<"multiplication of two numbers is "<<result<<endl;
			break;
		}
		case 4:
		{
			result=num1/num2;
			cout<<"division of two numbers is "<<result<<endl;
			break;
		}
		case 5:
		{
			result=num1%num2;
			cout<<"modulus of two numbers is "<<result<<endl;
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

/*
enter two numbers
5
6
1:add 2:sub  3:multiplication  4:division  5:modulus 6:exit
enter your choice
1
addition of two numbers is 11
1:add 2:sub  3:multiplication  4:division  5:modulus 6:exit
enter your choice
2
substraction of two numbers is -1
1:add 2:sub  3:multiplication  4:division  5:modulus 6:exit
enter your choice
3
multiplication of two numbers is 30
1:add 2:sub  3:multiplication  4:division  5:modulus 6:exit
enter your choice
4
division of two numbers is 0
1:add 2:sub  3:multiplication  4:division  5:modulus 6:exit
enter your choice
5
modulus of two numbers is 5
1:add 2:sub  3:multiplication  4:division  5:modulus 6:exit
enter your choice
6

 */