//Nested Recursion
#include <iostream>

int nestedFunction(int n){
    if(n>100){
        return n-10;

    }
    else return nestedFunction(nestedFunction(n+11));
}


int main(){

    std::cout<<nestedFunction(95)<<"\n";


    return 0;

}