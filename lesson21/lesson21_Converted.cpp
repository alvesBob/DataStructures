#include <iostream>
using namespace std;

class Rectangle{

private:
    int length;
    int breadth;

public:
Rectangle( int l, int b){
    length=l;
   breadth=b;
}

int area(){
    return length * breadth;
}
void changeLength(int l){
     length =l;
}

int getLength(){
    return length;
}
int getBreadth(){
    return breadth;
}

};

int main(){
    Rectangle r(10,5);
   
   int area1 = r.area();
   cout<<"Area:"<<area1<<endl;

   r.changeLength(15);

   int area2 = r.area();
   cout<<"Area:"<<area2<<endl;

   cout<<"Length:"<<r.getLength()<<endl;
   cout<<"Breadth:"<<r.getBreadth()<<endl;
   


    return 0;
}