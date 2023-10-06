#include <stdio.h>
#include <iostream>

using namespace std;

int main(){

    int A[5]={2,4,6,8,10};
   int a=10;
    int *p;
    p=&a;
    p=A;
    int p2 = A[0];

    cout<<*p<<endl;
    cout<<p2<<endl;

    for(int i=0; i<5; i++){
        cout<<"A["<<i<<"] = "<<*p<<endl;
        p++;
    }




    return 0;
}