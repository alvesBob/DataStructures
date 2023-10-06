#include <iostream>
using namespace std;

int* fun(int n){
    int *p;
    p = (int *)malloc(n * sizeof(int));
    return p;
}

int main(){
    int* A = fun(5);
   free(A);
    return 0;
}
