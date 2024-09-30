#include<iostream>
using namespace std;

/*double func(double x){
    return x*x;
}

int call(double (*pf)(),double x){
    return (*pf)(x);

}*/

void hello(){cout << "hello world";}

int main(){
    void call=hello;
    call();
    

}