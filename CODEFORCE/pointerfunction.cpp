#include<iostream>
using namespace std;

int square(int i){
    return i*i;
}

int power4(int x,int (*pf)(int x)){
    return (*pf)(x) * (*pf)(x);
}

int main(){
    cout << power4(4,square);
}