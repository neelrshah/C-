#include<iostream.h>
#include<conio.h>
#include<stdio.h>

class geometry
{
      public:
	void area(int);
	void area(float);
	void area(int,int,int);
};
     void geometry::area(int r)
      {
	  cout<<"area of circle:"<<3.14*r*r;
      }
      void geometry::area(float a)
      {
	  cout<<"area of cube:"<< 6*a*a;
      }
      void geometry::area(int l,int b,int h)
      {
      cout<<"area of cuboid:"<< 2*((l*b)+(b*h)+(h*l));
      }
      void main()
       {
	    int ch;
	    int a,r,l,b,h;
	    clrscr();
	    geometry obj;
	    do
	    {
	    cout<<"\n function overloding";
	    cout<<"\n 1.area of circle 2.area of cubu 3.area of coboid 4.exit";
	    cin>>ch;
      switch(ch)
      {
	    case 1:
		    cout<<"enter radius of circle:";
		    cin>>r;
		    obj.area(r);
		    break;
	     case 2:
		    cout<<"enter the length:";
		    cin>>a;
		    obj.area(a);
		    break;
	    case 3:
		    cout<<"enter the l,b,h:";
		    cin>>l>>b>>h;
		    obj.area(l,b,h);
		    break;
	    case 4:
		    cout<<"exit"<<endl;
      }
      }
	while(ch!=4);
       getch();
  }

