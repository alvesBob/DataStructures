#include <iostream>

int factorial(int n){
    if(n<2){
        return 1;
    }
    return n*(factorial(n-1));
    }

int main(){

    int t1,t2,t3,n, r, c;
std::cout<<"Enter the number of elements in the set and number of elements in each group:\n";

std::cin>>n>>r;

t1 = factorial(n);
t2 = factorial(r);
t3 = factorial(n-r);

c = t1/(t2*t3);
std::cout<<"There are "<<c<<" possible combinations.\n";

   return 0; 

}

