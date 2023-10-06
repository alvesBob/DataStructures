#include <iostream>
using namespace std;

struct student{
    int roll;
   char name[25];
    char dept[10];
   char address[50];
};



int main(){
   struct  student s;
    s.roll = 10;
    strcpy(s.name ,"Rahul");

    cout << "Roll" << s.roll << endl;
    cout << "Name:" << s.name << endl;
}

