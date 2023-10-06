#include <iostream>
//INDIRECT RECURSION:

//Prototypes

void functionA(int n);
void functionB(int n);

void functionA(int n){
    if(n==0){
        return;
    }
    std:: cout<< "n: " << n << "\n";
    functionB(n-1);

}

void functionB(int n){
    if(n==0){
        return;
    }
    std::cout<< "n: " << n << "\n";
    functionA(n/2);

}


int main(){


functionA(20);
    return 0;


}