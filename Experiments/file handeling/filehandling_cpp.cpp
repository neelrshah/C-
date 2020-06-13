
//filehandeling in cpp

#include<fstream.h>
#include<iostream.h>
#include<conio.h>

 
int main ()
{

   char data[100];

   clrscr();
   ofstream outfile;
   outfile.open("test1.txt");

   cout << "Writing to the file" << endl;
   cout << "Enter your name: ";
   cin.getline(data, 100);


   outfile << data << endl;

   cout << "Enter your age: ";
   cin >> data;
   cin.ignore();


   outfile << data << endl;


   outfile.close();


   ifstream infile;
   infile.open("test1.txt");

   cout << "Reading from the file" << endl;
   infile >> data;


   cout << data << endl;


   infile >> data;
   cout << data << endl;


   infile.close();


   getch();

   return 0;
}