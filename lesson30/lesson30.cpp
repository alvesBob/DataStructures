#include <iostream>
using namespace std;

template<class T>
class Arithmetic{
private:
  T a;
  T b;
public:
    Arithmetic(T a, T b);
    int add();
    int sub();
};

template<class T>
Arithmetic<T>::Arithmetic(T a, T b){
        this->a=a;
        this->b=b;
    }
template<class T>
  int Arithmetic<T>::add(){
        return a+b;
    }
template<class T>
    int Arithmetic<T>::sub(){
        return a-b;
    

};


int main(){
   Arithmetic<int> ar(10,5), ar2(15,7);

   cout<<"Add: "<<ar.add()<<endl;
   cout<<"Sub: "<<ar.sub()<<endl;

    return 0;
}