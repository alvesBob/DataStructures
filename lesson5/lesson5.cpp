#include <iostream>
#include <stdio.h>

using namespace std;

struct rectangle
{
    int length;
    int breadth;
    
};

int main(){

struct rectangle r;

r = {10, 20};

r.length = 15;
  cout << "Length: " << r.length << std::endl;
  printf("Length: %d\n", r.length);
    
}

