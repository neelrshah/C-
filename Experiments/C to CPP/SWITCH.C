
//exp=1
// c program to demonstrate arithematic operators using switch case c

#include<stdio.h>
#include<conio.h>
void main()
{
	int num1,num2,result,ch;
	clrscr();
	printf("enter two numbers\n");
	scanf("%d%d",&num1,&num2);
	do
	{
	printf("1:add\n2:sub\n3:multiplication\n4:division\n5:modulus\n6:exit");
	printf("enter your choice\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
		{
			result=num1+num2;
			printf("addition of two numbers is %d\n",result);
			break;
		}
		case 2:
		{
			result=num1-num2;
			printf("substraction of two numbers is %d\n",result);
			break;
		}
		case 3:
		{
			result=num1*num2;
			printf("multiplication of two numbers is %d\n",result);
			break;
		}
		case 4:
		{
			result=num1/num2;
			printf("division of two numbers is %d\n",result);
			break;
		}
		case 5:
		{
			result=num1%num2;
			printf("modulus of two numbers is %d\n",result);
			break;
		}
		case 6:
		{
		break;
		}
		default:
		printf("invalide choice\n");
	}
	}while(ch!=6);
	getch();
}
