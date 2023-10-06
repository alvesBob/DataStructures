#include <iostream>

using namespace std;

int add(int a, int b){
    int c;
    c=a+b;

    return c;
}

int main(){
    
int num1=10, num2 = 15; 

int sum = add(num1, num2);
cout << sum;

return 0;

}