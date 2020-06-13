

//EXP 12:FRIEND FUNCTION

#include<iostream.h>
#include<conio.h>
class myclass
{
	private:
		int num;
	public:
		myclass()
			{
			cout<<"in myclass constructor"<<endl;
			 num=100;
			}
		void disp1()
			{
			cout<<"number in disp1"<<endl<<num<<endl;
			}
		  friend void disp2(const myclass &);
};


void disp2(const myclass &temp)
{
	cout<<"number in disp2"<<endl;
	cout<<temp.num<<endl;
}


void main()
{
	clrscr();
	myclass m1;
	m1.disp1();
	disp2(m1);
	getch();

}

/*in myclass constructor
number in disp1
100
number in disp2
100
*/





                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
