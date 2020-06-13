
//EXP 14:VIRTUAL FUNCTION (static obj)


#include<iostream.h>
#include<conio.h>

class game
{
public:
	game()
	{
	cout<<"in game constructor"<<endl;
	}

	void play()
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
cricket c;
c.play();
tennis t;
t.play();
getch();
}
/*
in game constructor
in cricket constructor                                                          
play cricket                                                                    
in game constructor                                                             
in tennis constructor                                                           
play tennis
*/

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
