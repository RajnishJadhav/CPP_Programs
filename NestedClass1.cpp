#include<iostream>
using namespace std;
#include<string.h>

class student
{

    int rollNo;
    char name[20];
    int marks;
       class address
       { 
        int houseNo;
        char pin[10];
        char city[20];

         public:
          void setAdd(int h, char* p, char* c){
            houseNo=h;
            strcpy(pin,p);
            strcpy(city,c);
          } 
          void dispAdd(){

            cout<<houseNo<<pin<<city;
          }   
      };
        address a;  
    public:
      void setRollNo(int r){
        rollNo=r;
      }
      void setName(char *n){
        strcpy(name,n);
      }
      void setMarks(int m){
        marks=m;
      }
      void setAdd(int h, char* p, char* c){

        a.setAdd(h,p,c);
      }
       void display(){

        cout<<"Roll no is: "<<rollNo;
        cout<<"Name is: "<<name;
        cout<<"Marks is: "<<marks;
        a.dispAdd();
       }
};
  int main(){

      student s;
      s.setRollNo(1);
      s.setName("Rajnish");
      s.setMarks(59);
      s.setAdd(115,"412101","Pune");
      s.display();
  }