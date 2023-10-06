#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct Rectangle {
   int length;
   int breadth;


};

// void fun(struct Rectangle *p){
//     p->length = 20;
//     cout << "Length: " << p->length << endl <<" Breadth: " << p->breadth << endl;
// }

struct Rectangle *fun(){
   struct Rectangle *p;
   p = new Rectangle;

   p->length =15;
   p-> breadth = 7;

   return p;
   //p = (struct Rectangle *)malloc(sizeof(struct Rectangle));
};

int main(){
//     struct Rectangle r = {10, 20};
//     fun(&r);
//     printf("Length %d \n Breadth %d \n", r.length, r.breadth);

struct  Rectangle *ptr=fun();
cout<<"Length: "<<ptr->length<<endl<<" Breadth: "<<ptr->breadth<<endl;


return 0;

}
