//name: neel shah
//roll=220
//exp=2
//grade using c++

#include<iostream.h>
#include<conio.h>
void main()
{
	int marks[5],sum=0,i;
	float per;
	clrscr();
	cout<<"enter marks of 5 subjects"<<endl;
	for(i=0;i<5;i++)
	{
		cin>>marks[i];

	}
	for(i=0;i<5;i++)
	{
		sum=sum+marks[i];
	}
	per=sum/5;
	cout<<"percentage is "<<per <<endl;
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
getch();
}

