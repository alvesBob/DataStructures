#include <iostream>
using namespace std;

struct Rectangle {
    int length;
    int breadth;
};

void initialize(struct Rectangle *r, int l, int b){
    r->length=l;
    r->breadth=b;
};

int area(struct Rectangle &r1){
    return r1.length * r1.breadth;
};

void changeLength(struct Rectangle *r, int l){
    r->length = l;

};

int main(){
    struct Rectangle r;
    initialize(&r, 10,5);
    area(r);
    changeLength(&r,20);
}
