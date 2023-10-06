#include <iostream>

using namespace std;

 int add(int a, int b){
    int c;
    c=a+b;
    return c;
// a++;
// cout << a;
// return 0;

};

int main(){
int num1=10, num2 = 15, sum;
sum = add(num1, num2);
cout << sum;
//cout<<add(num1, num2);

    return 0;
}