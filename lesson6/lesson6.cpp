#include <iostream>

using namespace std;

struct Rectangle {
    int length;
    int breadth;
} r1;//variable declaration with struct

int main(){

r1 ={10, 5};

cout<<"Length: "<< r1.length << endl;
cout<<"Breadth: "<< r1.breadth << endl;


    return 0;
}