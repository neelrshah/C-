
//EXP 22:QUEUE USING TEMPLATE

#include<iostream.h>
#include<conio.h>
template<class T>
class queue
{
  private:
	   int front,rear;
	   T a[5];
  public:
	  queue()
	  {
	   front=-1;
	   rear=-1;
	  }
	  void enqueue(T ch);
	  void dequeue();

};

template<class T>void queue<T>::enqueue(T item)
{
  if(rear==4)
  {
  cout<<"queue overflow"<<endl;
//  return 0;
  }
  else if(front==-1)
  {
  front++;
  rear++;
  }
  else
  {
  rear++;
  }
  a[rear]=item;
  cout<<"enqueued:"<<item<<endl;
}
template<class T>void queue<T>::dequeue()
{
 T value;
 if(front==-1)
 {
 cout<<"queue underflow"<<endl;
 }
 else
 {
   //value=a[front];
//   front++;
   cout<<"dequeued element is"<<a[front]<<endl;
   front++;
   if(front>rear)
   {
    front=rear=-1;
   }
 }
 //  return value;
}
void main()
{
 queue<int>q1;
 //queue <char>q2;
 int i;
 char c;
 clrscr();
// q1.enqueue();
//q2.enqueue();
 q1.enqueue(1);
 q1.enqueue(2);
 q1.enqueue(4);
 for(i=0;i<3;i++)
 {
   cout<<"delete from integer"<<endl;
  q1.dequeue();
 }
 queue<char>q2;
 q2.enqueue('a');
 q2.enqueue('s');
 q2.enqueue('c');
  for(i=0;i<3;i++)
 {

   cout<<"delete from characters"<<endl;
  q2.dequeue();

 }
  getch();

}