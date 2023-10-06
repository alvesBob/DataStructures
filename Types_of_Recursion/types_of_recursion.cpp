#include <iostream>
//--------------------------------------------------------------------------------
//Taul Recursion:
void tailRecursion(int n){

if(n == 0){
    return;
}
std::cout<< n << " ";

tailRecursion(n-1);

}

//--------------------------------------------------------------------------------
//head Recursion:
void headRecursion(int n){
    if(n==0){
        return; 

    }
    headRecursion(n-1);
    std::cout<< n << " ";


}

//--------------------------------------------------------------------------------
//Tree Recursion:

void treeRecursion(int n){
    
    if(n==0){
        return;
    }
    treeRecursion(n-1);
    treeRecursion(n-1);
}

//--------------------------------------------------------------------------------
//Indirect Recursion: 
void functionA(int n);
void functionB(int n);

void functionA(int n){
    if(n==0){
        return;
    }
    std:: cout<< "A" << n << " ";
    functionB(n-1);
    
}

void functionB(int n){
    if(n==0){
        return;
    }
    std:: cout<< "B" << n << " ";
    functionA(n-1);
}


//--------------------------------------------------------------------------------


int main(){

    tailRecursion(3);
    headRecursion(3);


    
    return 0;
}

