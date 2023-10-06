#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;
int main(){

int *p;
p = (int*)malloc(5*sizeof(int));

cout << p << endl;

    return 0;

}