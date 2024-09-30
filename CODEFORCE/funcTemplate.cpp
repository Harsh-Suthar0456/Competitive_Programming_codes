#include<iostream>
using namespace std;

template<typename hlo>
hlo square(hlo x){
    return x+x;
}

int main(){
    cout << square(4)<<endl<<square('a')<<endl<<square(4.5);
}