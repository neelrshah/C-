//name : dhanashri thorat
//roll no:203
//implement function overloading


#include<conio.h>
#include<iostream.h>
 class geometry
  {
   private:
   float l,b,h,a,d,r;
   public:
    float area(float a)
    {
    float area;
    area=6*a*a;
    cout<<"area of cube="<<area<<endl;
    }
    float area(float l,float b,float d)
    {
    float area;
    area=(2*(l*b)+(b*h)+(h*l));
    cout<<"area of cuboid="<<area<<endl;
    }
    float area(float r,float h)
    {
    float area;
    area=(2*3.142*r*h);
    cout<<"area of cylinder="<<area<<endl;
    }
      float vol(float a)
     {
     float vol;
     vol=a*a*a;
     cout<<"vol of cube="<<vol<<endl;
     }
      float vol(float l,float b,float d)
     {
     float vol;
     vol=l*b*d;
     cout<<"vol of cuboid="<<vol<<endl;
     }
      float vol(float r,float h)
     {
     float vol;
     vol=3.142*r*r*h;
     cout<<"vol of cylinder="<<vol<<endl;
     }
    };
  void main()
  {
  geometry g;
  int ch,n;
  clrscr();
  g.area();
  g.vol();
  do
  {
   cout<<"Enter the choice"<<endl;
   cout<<"1.area & vol of cube"<<endl;
   cout<<"2.area & vol of cuboid"<<endl;
   cout<<"3.area & vol of cylinder"<<endl;
  switch(ch)
  {
   case 1:
   {
   cout<<"Enter the side of cube"<<endl;
   cin>>a;
    g.area(a);
    g.vol(a);
   break;
   }
   case 2:
   {
   cout<<"Enter the length,breadth,depth of cuboid"<<endl;
   cin>>l>>b>>d;
    g.area(l,b,d);
    g.vol(l,b,d);
   break;
   }
   case 3:
   {
   cout<<"Enter the radius & height of cylinder"<<endl;
   cin>>r>>h;
    g.area(r,h);
    g.vol(r,h);
   break;
   }
   default:
   cout<<"Invalid choice"<<endl;
   }
   cout<<"press 1 if want to continue"<<endl;

} while(n==1)
 getch();
}











