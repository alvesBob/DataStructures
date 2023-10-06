#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;
struct Rectangle {
    int length;
    int breadth;
};

void changeLength(struct Rectangle *p, int l){
p->length = l;



}

int main(){
struct  Rectangle r = {10, 20};
changeLength(&r, 15);

    return 0;
}