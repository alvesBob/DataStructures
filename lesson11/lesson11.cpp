#include <iostream>

using namespace std;

  
    struct Rectangle
    {
        int length;
        int breadth;
        
    };


int main() {
  
//   struct Rectangle *p;
//  p= (struct Rectangle*) malloc(sizeof(struct Rectangle));

Rectangle r= {10, 20};

cout<<r.length<<endl;
cout<<r.breadth<<endl;

Rectangle *p=&r;

cout<<p->length<<endl;
cout<<p->breadth<<endl;

    return 0;

}