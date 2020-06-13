
//EXP 14:VIRTUAL FUNCTION(dynamic)


#include<iostream.h>
#include<conio.h>

class game
{
public:
	game()
	{
	cout<<"in game constructor"<<endl;
	}

       virtual void play()
	{
		cout<<"play game"<<endl;
	}

};

class cricket:public game
{
public:
	cricket()
	{
		cout<<"in cricket constructor"<<endl;
	}

	void play()
	{
		cout<<"play cricket"<<endl;
	}

};


class tennis:public game
{
public:
	tennis()
	{
		cout<<"in tennis constructor"<<endl;

	}

	void play()
	{
		cout<<"play tennis"<<endl;
	}

};

void main()
{
clrscr();
game *ptr=new game;
ptr->play();
cricket c;
ptr=&c;
ptr->play();
tennis t;
ptr=&t;
ptr->play();
getch();
}
/*
in game constructor
play game                                                                       
in game constructor                                                             
in cricket constructor                                                          
play cricket                                                                    
in game constructor                                                             
in tennis constructor                                                           
play tennis                                                                     
                                                                                
 */
                                                                                
                                                                                

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
