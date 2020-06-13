//NAME:thorat dhanashri kashinath
//ROLL:203
//MULTILEVEL INHERITANCE :EMPLOY

#include<iostream.h>
#include<conio.h>
class employ1
{
	private:
		int eno;
		char name[20],department[20];
	public:
		void enter1()
		{
			cout<<"ENTER THE DETAILS OF THE EMPLOYE:";
			cout<<"\nemploye number:";
			cin>>eno;
			cout<<"\nemploye name:";
			cin>>name;
			cout<<"\nenter department:";
			cin>>department;
		}

		void disp1()
		{
			cout<<"\nemploye number:"<<eno;
			cout<<"\nemploye name:"<<name;
			cout<<"\nenter department:"<<department;
		}

};

class employ2
{
	private:
		int acc,date,month,year;
	public:
	void enter2()
	{      	cout<<"\nenter the account number:";
		cin>>acc;
		cout<<"\nenter the joining date,month,year";
		cin>>date>>month>>year;

	}
	void disp2()
	{
		cout<<"\naccount number:"<<acc;
		cout<<"date:"<<date<<"/"<<month<<"/"<<year;
	}
};
class employ3:employ1,employ2
{
	private:
		int sal,den,hra,travel,salary,prfund,lic,total1,total2,net,days;
		int gross,gpf,dedn;
	public:
	void enter3()
	{
		employ1::enter1();
		employ2::enter2();
		cout<<"Enter payable days"<<endl;
		cin>>days;
		cout<<"Enter salary per day"<<endl;
		cin>>sal;
	}
	void formula()
	{
		 salary=days*sal;
		 den=salary*0.05;
		 hra=salary*0.12;
		 travel=salary*0.09;
		 gross=salary+den+hra+travel;
		 prfund=salary*0.04;
		 gpf=salary*0.01;
		 lic=salary*0.01;
		 dedn=prfund+gpf+lic;
		 total1=gross;
		 total2=dedn;
		 net=total1-total2;
	}
	 void disp3(void);
 };


 void employ3::disp3()
 {

	  disp1();
	  disp2();
	  cout<<"The days are"<<days<<endl;
	  cout<<"The salary is"<<sal<<endl;
	  cout<<"The total salary is"<<salary<<endl;
	  cout<<"The deduction is"<<dedn<<endl;
	  cout<<"Gross salary is"<<gross<<endl;
	  cout<<"The net salary is"<<net<<endl;
	  cout<<"Home rent allowance is"<<hra<<endl;
	  cout<<"Travel allowance is"<<travel<<endl;
	  cout<<"The prfund is"<<prfund<<endl;

 }
 void main()
 {
  clrscr();
  employ3 e;
  e.enter3();
  e.formula();
  e.disp3();
  getch();
 }