
//exp=4
//function overloading


#include<iostream.h>
#include<conio.h>
#include<stdlib.h>

class geometry
{
  private:
	  float area,a,l,b,h,r,height;
	  float volume;
  public:
	  void Area(float a)
	  {
	   area= 6*a*a;
	   cout<<"area"<<area<<endl;
	  }
	   void Volume(float a)
	   {
	    volume=a*a*a;
	    cout<<"volume"<<volume<<endl;
	   }
	   void Area(float l, float b, float h)
	   {
	    area=2*(l*b+b*h+h*l);
	    cout<<"area"<<area<<endl;

	   }
	   void Volume(float l, float b, float h)
	   {
	    volume=l*b*h;
	    cout<<"volume"<<volume<<endl;
	   }
	   void Area(float r, float height)
	   {
	    area=2*3.14*r*(height+r);
	    cout<<"area"<<area<<endl;
	   }
	   void Volume(float r,float height)
	   {
	    volume=3.14*r*r*height;
	    cout<<"volume"<<volume<<endl;
	   }
};
void main()
{
  geometry x;
  int ch,a,h,r,l,b,height;
  clrscr();
  do
  {
  cout<<"1.CUBE"<<endl;
  cout<<"2.CUBOID"<<endl;
  cout<<"3.CYLINDER"<<endl;
  cout<<"4.EXIT"<<endl;
  cout<<"enter the choice"<<endl;
  cin>>ch;

  switch(ch)
  {
   case 1:
	 float a;
	 cout<<"enter the dimensions of cube"<<endl;
	 cin>>a;
	 x.Area(a);
	 x.Volume(a);
	 break;
   case 2:
	 float l,b,h;
	 cout<<"enter length,breadth,height:"<<endl;
	 cin>>l>>b>>h;
	 x.Area(l,b,h);
	 x.Volume(l,b,h);
	 break;
   case 3:
	 float r,height;
	 cout<<"enter the radius and height:"<<endl;
	 cin>>r>>height;
	 x.Area(r,height);
	 x.Volume(r,height);
	 break;
  case 4:exit(1);
  }
  }while(ch!=4);
   getch();

}
/*
1.CUBE
2.CUBOID                                                                        
3.CYLINDER                                                                      
4.EXIT                                                                          
enter the choice                                                                
1                                                                               
enter the dimensions of cube                                                    
3                                                                               
area54                                                                          
volume27                                                                        
1.CUBE                                                                          
2.CUBOID                                                                        
3.CYLINDER
4.EXIT
enter the choice
4
*/








