//NAME:thorat dhanashri kashinath
//ROLL:203
//VEHICAL

#include<iostream.h>
#include<conio.h>
int ch;
class one
{
	private:
			 int cc1,cc2,milage1,milage2;
	public:
			 char type1[30],type2[30];
			 void data()
			 {
				cout<<"enter the type of vehical 1:"<<endl;
				cin>>type1;
				cout<<"\nenter cc of vehical 1:"<<endl;
				cin>>cc1;
				cout<<"\nenter milage of vehical 1"<<endl;
				cin>>milage1;
			 }
			 void data1()
			 {
				cout<<"enter the type of vehical 2:";
				cin>>type2;
				cout<<"\nenter cc of vehical 2:"<<endl;
				cin>>cc2;
				cout<<"\nenter milage of vehical 2"<<endl;
				cin>>milage2;
			 }
			 void disp()
			 {
				cout<<"\nINFORMATION OF FIRST VEHICLE"<<endl;
				cout<<"\ntype:"<<type1;
				cout<<"\nmilage:"<<milage1;
				cout<<"\nCC:"<<cc1;
			 }
			 void disp1()
			 {
				cout<<"\nINFORMATION OF SECOND VEHICLE";
				cout<<"\n";
				cout<<"\ntype:"<<type2;
				cout<<"\nmilage:"<<milage2;
				cout<<"\ncc:"<<cc2;
			 }
		int cmp1()
		{
			if(milage1>milage2)
				return 1;
			else
				return 0;
		}
		int cmp2()
		{
			if(cc1>cc2)
				return 1;
			else
				return 0;
		}
};

class two:public one
{
	private:
			 int seat1,seat2,model1,model2;
	public:
			void data2()
			{
				data();
				cout<<"\nenter the number of seats in vehical 1:"<<endl;
				cin>>seat1;
				cout<<"\nenter model number of vehical 1:"<<endl;
				cin>>model1;
			}
			void disp2()
			{
				cout<<"\nnum"<<seat1;
				cout<<"\nmodel:"<<model1;
				cout<<"\n";
			}
			void data3()
			{
				data1();
				cout<<"\nenter number of seats in vehical 1"<<endl;
				cin>>seat2;
				cout<<"\nenter model number of vehical 2:"<<endl;
				cin>>model2;
			}
			void disp3()
			{
				cout<<"\nnumber of seats:"<<seat2;
				cout<<"\nmodel:"<<model2;
				cout<<"\n";
			}
};
class three:public two
{
	public:
			 void data4()
			 {
				data2();
			 }
			  void data5()
			 {
				data3();
			 }
			 void display();
			 void compare();

};

void three::display(void)
{

	disp();
	disp2();
	disp1();
	disp3();
}
void three::compare(void)
{

	if(ch==1)
	{
		if(cmp1())
		{
			cout<<"\nFIRST VEHICLE IS BETTER THAN SECOND"<<endl;
		}

	else
		{
			cout<<"\nSECOND VEHICLE IS BETTER THAN FIRST"<<endl;
		}

		cout<<"\n";
	}

       if(ch==2)
       {
		if(cmp2())
		{
			cout<<"\nFIRST VEHICLE IS BETTER THAN SECOND";
		}

	else
		{
			cout<<"\nSECOND VEHICLE IS BETTER THAN FIRST";
		}

		cout<<"\n";

	}
}

void main()
{
	three obj;
	while(ch!=3)
	{
		cout<<"\n1.TWO WHEELER\n2.FOUR WHEELER\n3.EXIT";
		cout<<"\nENTER YOUR CHOICE\n";
		cin>>ch;
		switch(ch)
		{
			case 1:
				cout<<"\nFOR FIRST VEHICLE\n";
				obj.data4();
				cout<<"\nFOR SECOND VEHICLE\n";
				obj.data5();
				obj.display();
				obj.compare();
				break;
			case 2:
				cout<<"\nFOR FIRST VEHICLE\n";
				obj.data4();
				cout<<"\nFOR SECOND VEHICLE\n";
				obj.data5();
				obj.display();
				obj.compare();
				break;
			case 3:

				break;
			default:
				cout<<"\nINVALID CHOICE";
		}
	}
getch();
}
