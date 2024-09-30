#include<iostream>

#define NDEBUG

using  namespace std;
int main(){
    /*int a=10;
    assert(a=9);
    
    cout << a;*/
    srand(time(NULL));
    int a=rand();
    cout << a;
}