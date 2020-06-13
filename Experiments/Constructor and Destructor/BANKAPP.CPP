
//EXP=3
//PROGRAM TO IMPLEMENT CONSTRUCTOR AND DISTRUCTOR(BANK APPLICATION)

#include<stdio.h>
#include<iostream.h>
#include<conio.h>
class account
{
	private:
	int an,month,dep,with;
	float rate,bal,intr;
	char name[15];
	public:
	account();
	~account();
	void getbal();
	void compound();
	void deposit();
	void withdraw();

};
	account::account()
	{
		cout<<"enter name:";
		cin>>name;
		cout<<"enter account number"<<endl;
		cin>>an;
		rate=0.03;
		bal=0;
		month=0;
	}
	account::~account()
	{
		cout<<"THANKYOU"<<endl;
		getch();
	}
	void account::getbal(void)
	{
		cout<<"your balance is:"<<bal<<endl;
	}
	void account::deposit(void)
	{
		cout<<"enter the amount to be deposited"<<endl;
		cin>>dep;
		bal=bal+dep;
		cout<<"new balance:"<<bal<<endl;
	}
	void account::withdraw(void)
	{
		cout<<"enter the amount to be withdraw"<<endl;
		cin>>with;
		if(with<bal)
		{
			bal=bal-with;
			cout<<"new balance:"<<bal<<endl;
		}
		else
		cout<<"cannot withdraw amount as amout is greater then balance"<<endl;
	}
	void account::compound(void)
	{
		cout<<"enter the number of months"<<endl;
		cin>>month;
		intr=bal*rate*month;
		cout<<"intrest:"<<intr<<endl;
		bal=bal+intr;
		cout<<"new balance after adding intrest is:"<<bal<<endl;
	}


void main()
{
clrscr();
account ac;
int ch;
	do
	{
	cout<<"1.get balance\n2.deposite\n3.withdraw\n4.intrest\n5.exit\n";
	cout<<"enter your choice:"<<endl;
	cin>>ch;

		switch(ch)
		{
		case 1:
			ac.getbal();
			break;
		case 2:
			ac.deposit();
			break;
		case 3:
			ac.withdraw();
			break;
		case 4:
			ac.compound();
			break;
		case 5:
			break;

		}

	}while(ch!=5);
}
/*
enter your choice:
2
enter the amount to be deposited
10000
new balance:10000
1.get balance
2.deposite
3.withdraw
4.intrest
5.exit
enter your choice:
3
enter the amount to be withdraw
500
new balance:9500
1.get balance
2.deposite
3.withdraw
4.intrest
5.exit
enter your choice:
5
THANKYOU
*/
