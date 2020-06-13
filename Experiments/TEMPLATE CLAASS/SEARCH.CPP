
//SEARCHING USING TEMPLATE

#include<iostream.h>
#include<conio.h>
template<class T>
void lsearch(T*a,T key,int n)
{
  int flag=0,i;
  for(i=0;i<n;i++)
  {
     if(a[i]==key)
     {
      flag=1;
      break;
     }
  }
  if(flag==1)
  cout<<"search is sucessfulat loc"<<i+1<<endl;
  else
  cout<<"search is unsuceeful"<<endl;
}
template<class T>
void bsearch(T*a,T key,int n)
{
   int flag=0;
   int low=0;
   int high=n-1;
   int mid;
   while(low<=high)
   {
      mid=(low+high)/2;
      if(a[mid]==key)
      {
      flag=1;
      break;
      }
      else if(key<a[mid])
      {
      high=mid-1;
      }
      else
      {
      low=mid+1;
      }
   }
if(flag==1)
  cout<<"search is sucessfulat loc"<<mid+1<<endl;
  else
  cout<<"search is unsuceeful"<<endl;
}
void main()
{
   clrscr();
  int i;
  int a[10]={1,2,3,4,5,6,7,8,9,10};
  double b[6]={2.434,5.53,34.4,14.65,55.7,29.34};
  int ele;
  double dele;
  cout<<"elements of integer array"<<endl;
  for(i=0;i<10;i++)
  {
    cout<<" "<<a[i]<<endl;
  }
  cout<<"enter an key to be search:"<<endl;
  cin>>ele;
  lsearch(a,ele,10);
  bsearch(a,ele,10);
  cout<<"elements of double array"<<endl;
  for(i=0;i<6;i++)
  {
    cout<<" "<<b[i]<<endl;
  }
   cout<<"enter an key to be search:"<<endl;
  cin>>dele;
  lsearch(b,dele,6);
  bsearch(b,dele,6);
  getch();
}

