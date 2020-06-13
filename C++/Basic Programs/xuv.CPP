#include<iostream.h>
#include<conio.h>

class xuv300
{
private:
	int price;
	int fuel;
	int milage;
public:

xuv300()
{

	int price=1400000;
	int fuel=42;
	int milage=20;
}
void disp1()
{       cout<<"***********************************"<<endl;
	cout<<"car madel=mahindra xuv300"<<endl;
	cout<<"body type=suv"<<endl;
	cout<<"fuel type=disel"<<endl;
	cout<<"fuel capacity="<<fuel<<endl;
	cout<<" car milage="<<milage<<endl;
	cout<<"on road price="<<price<<endl;
	cout<<"transmission type= automatic"<<endl;
	cout<<"************************************"<<endl;
}
};

class xuv500
{
private:
	int price1;
	int fuel1;
	int milage1;
public:

xuv500()
{

	int price1=2200000;
	int fuel1=70;
	int milage1=15;
}
void disp2()
{       cout<<"***********************************"<<endl;
	cout<<"car madel=mahindra xuv500"<<endl;
	cout<<"body type=suv"<<endl;
	cout<<"fuel type=disel"<<endl;
	cout<<"fuel capacity="<<fuel1<<endl;
	cout<<" car milage="<<milage1<<endl;
	cout<<"on road price="<<price1<<endl;
	cout<<"transmission type= automatic"<<endl;
	cout<<"************************************"<<endl;
}
};


/*
class comparison:
{
private:
	int numc;
public:

child()
{
	cout<<"in child constucter"<<endl;
	numc=300;
}
void disp3()
{
	cout<<numc<<endl;
	disp1();
	disp2();
}
};
*/

void main()
{
clrscr();
xuv300 x1;
x1.disp1();
xuv500 x2;
x2.disp2();
getch();
}