#include <iostream>

int sum(int n){
    if(n==0){
        return 0;
    }
    else return n+sum(n-1);
}

int sum2(int a,int b, int razao){
    if(a==0 || b==0){
        return 0;
    }
    else return 
    ((((b-a)/razao)+1)/2)*(a+b);
}

int main(){
    std::cout<<"Type the initial number, the final number and the rate: ";
    int a,b,razao;
    std::cin>>a>>b>>razao;
    
    std::cout<<sum2(a,b,razao)<<"\n";
   
    if(a==1 && razao==1){
        std::cout<<sum(b)<<"\n";
    }
    return 0;

    
}