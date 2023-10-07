#include <iostream>

int fact(int n){
    if(n==0){
        return 1;
    }
    else return n*fact(n-1);
}

int main(){
 std::cout <<" Enter the number to calculate factorial: \n";

int n;

    std::cin >> n;

    std:: cout<<fact(n) << "\n";
    return 0;
}