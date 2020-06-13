#include<conio.h>
#include<iostream.h>

class grandparent1
{
	private:
		int numg1;
	public:
		grandparent1()
		{
			cout<<"grandparent1 are constructor"<<endl;
			numg1=100;
		 }
		void disp1()
		{
			cout<<numg1<<endl;
		}
};
class grandparent2
{
		private:
			 int numg2;
	public:
		grandparent2()
		{
			cout<<"grandparent2 are constructor"<<endl;
			numg2=200;
		 }
		void disp2()
		{
			cout<<numg2<<endl;
		}
};
class parent:grandparent1,grandparent2
{
	private:
		 int nump;
	public:
		parent()
		{
			cout<<"parent is constructed"<<endl;
			nump=300;
		}
		void disp3()
	{
	     // cout << nump<< endl;
		disp1();
		disp2();
		cout << nump<< endl;
	}
};
class child:parent
{
	private:
		int numc;
	public:
	       child()
		{
			cout<<"child is counstructor"<<endl;
			numc=400;
		}
		void disp4()
		{
			disp3();
			cout<<numc<<endl;
		       //	disp3();
		}
};
	void main()
	{        clrscr();

		child c1;
		c1.disp4();
		getch();
	}

