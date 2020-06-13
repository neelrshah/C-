#include<iostream.h>
#include<conio.h>
class account
{

    private:
      float draw,month,intr,rate,an,dep,bal;
      char name[10];
    public:

       account();
       ~account();
       void menu();
       void deposite();
       void getbal();
       void compound();
       void withdraw();
};
account::account()
       {
	cout<<"enter the account number"<<endl;
	cin>>an;
	cout<<"enter the name"<<endl;
	cin>>name;
	rate=0.02;
	bal=0;
	intr=0;
	month=0;
       }
account::~account()
       {
	cout<<"thank you";
       }
void account::deposite(void)
       {
       cout<<"enter the deposite"<<endl;
       cin>>dep;
       bal=bal+dep;
       cout<<"total balance is:";
       cout<<bal;
       }
void account::getbal(void)
       {
       cout<<"total balance is:"<<bal;
       }
void account::compound(void)
       {
       cout<<"enter the months"<<endl;
       cin>>month;
       intr=bal*rate*month/100;
       bal=bal+intr;
       cout<<"total balance is:"<<bal;
       }
void account::withdraw(void)
       {
	cout<<"enter the amount to be withdraw"<<endl;
	cin>>draw;
	if(bal>=draw)
	 {
	  bal=bal-draw;
	  cout<<"total balance is:"<<bal;
	 }
	 else
	 {
	 cout<<"sorry ,your balance is low"<<endl;
	 }
	}
    void main()
      {
	int ch;
	clrscr();
	account ac;
	do
	{
	cout<<endl<<"1.deposite<<endl2.withdraw<<endl3.getbal<<endl4.compound<<endl";
	cout<<endl<<"enter the choice"<<endl;
	cin>>ch;
	switch(ch)
	{
	   case 1:
			ac.deposite();
			break;
	   case 2:
			ac.withdraw();
			break;
	   case 3:
			ac.getbal();
			break;
	   case 4:
			ac.compound();
			break;
	   case 5:
			break;

	   default:
	    cout<<"incorrect choice";
	}
     }while(ch!=5);
     getch();
     }