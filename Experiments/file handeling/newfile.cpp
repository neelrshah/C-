
//file handeling in cpp

#include<iostream.h>
#include <fstream.h>
#include<conio.h>
int main()
{
	fstream new_file;
	clrscr();

	new_file.open("new_file.txt",ios::out);
	if(!new_file)
	{
		cout<<"File creation failed";
	}
	else
	{
		cout<<"New file created";
		new_file.close();
	}

	getch();
	return 0;
}