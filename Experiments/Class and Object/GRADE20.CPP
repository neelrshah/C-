
//exp=2
//grading using c++

#include<iostream.h>
#include<conio.h>
class grading
{
	private:
	float per;

	public:
	void accept()
	{
		cout<<"enter percentage of student"<<endl;
		cin>>per;
	}

	void disp()
	{
		cout<<"percentage of student is"<<per<<endl;
	}
	void grade()
	{
	if(per>=90)
		cout<<"grade A";
	if(per>=70&&per<90)
		cout<<"grade B";
	if(per>=50&&per<70)
		cout<<"grade C";
	if(per>40&&per<50)
		cout<<"grade D";
	if(per<40)
		cout<<"fail";
	}

};
void main()
{
	grading s1;
	clrscr();
	s1.accept();
	s1.disp();
	s1.grade();
	getch();
}

/*
enter percentage of student
68                                                                              
percentage of student is68                                                      
grade C                                                                         
 */

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
