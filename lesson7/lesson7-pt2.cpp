#include <stdio.h>
#include <iostream>

using namespace std;
int main(){

    int a = 10;

    int *p;

    p=&a;//p is pointing to a location in memory
    int z = *p;

    cout<<a<<endl;

    cout << *p << endl;
    cout << p << endl;
    return 0;
}