
//EXP 13:FRIEND CLASS

#include<iostream.h>
#include<conio.h>

class myclass1;
class myclass2
{

	private:
		int num2,num1;

	public:
		myclass2()
		{
			num1=100;
			num2=200;
		}

		friend class myclass1;


};

class myclass1
{

	public:
		void disp1(myclass2 m2)
		{

			cout<<"in disp1 num1="<<m2.num1<<endl;
		}
		void disp2(myclass2 m2)
		{
		     cout<<"in disp2 num2:"<<m2.num2<<endl;
		}


};

void main()
{
	clrscr();
	myclass1 m1;
	myclass2 m2;
	m1.disp1(m2);
	m1.disp2(m2);
	getch();
}

/*output:
in disp1 num1=100
in disp2 num2:200
*/














                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
