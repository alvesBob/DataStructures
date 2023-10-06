#include <iostream>
//--------------------------------------------------------------------------------
//Taul Recursion:
void tailRecursion(int n){
    std::cout<< "TAIL RECURSION\n";

if(n == 0){
    return;
}
std::cout<< n <<"\n";

tailRecursion(n-1);

}

//--------------------------------------------------------------------------------
//head Recursion:
void headRecursion(int n){
    std:: cout<< "HEAD RECURSION\n";
    if(n==0){
        return; 

    }
    headRecursion(n-1);
    std::cout<< n << "\n";
 


}

//--------------------------------------------------------------------------------
//Tree Recursion:

void treeRecursion(int n){
    std:: cout<< "TREE RECURSION\n";
    
    if(n==0){
        return;
    }
    treeRecursion(n-1);
    treeRecursion(n-1);
    std:: cout<< "END OF TREE RECURSION\n";
}

//--------------------------------------------------------------------------------
//Indirect Recursion: 
void functionA(int n);
void functionB(int n);

void functionA(int n){
     std:: cout<< "FUNCTIUON A\n";
    if(n==0){
        return;
    }
    std:: cout<< "A" << n << "\n";
    functionB(n-1);
     std:: cout<< "END OF FUNCTION A\n";
    
}

void functionB(int n){
    std:: cout<< "FUNCTION B\n";
    if(n==0){
        return;
    }
    std:: cout<< "B" << n << "\n";
    functionA(n-1);
    std:: cout<< "END OF FUNCTION B\n";
}


//--------------------------------------------------------------------------------
//Nested Recursion:

int nestedRecursion(int n){
    std:: cout<< "NESTED RECURSION\n";
    if(n <= 100){
        return n;
    std:: cout<< n <<"\n";
    }
    return nestedRecursion(nestedRecursion(n-1));
    std:: cout<< n << "\n";

     std:: cout<< "END OF NESTED RECURSION\n";
}



int main(){

    tailRecursion(3);
    headRecursion(3);
    treeRecursion(3);
    functionA(3);
    nestedRecursion(3);


    
    return 0;
}

