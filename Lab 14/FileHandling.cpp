#include <fstream>
#include <iostream>
using namespace std;
 
int main () {
   char data[100];

   
   ofstream outfile;
   outfile.open("Data.txt");

   cout << "Writing into the file" << endl;
   cout << "Enter your name: "; 
   cin.getline(data, 100);

   
   outfile << data << endl;

   cout << "Please Enter your age: "; 
   cin >> data;
   cin.ignore();
   
   
   outfile << data << endl;

  
   outfile.close();

   
   ifstream infile; 
   infile.open("Data.txt"); 
 
   cout << "Reading from the file" << endl; 
   infile >> data; 

 
   cout << data << endl;
   
   
   infile >> data; 
   cout << data << endl; 

 
   infile.close();

   return 0;
}
