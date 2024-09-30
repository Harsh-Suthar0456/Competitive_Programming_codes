#include<iostream>
using namespace std;
void value(int n){
    if(n==0){return;}
    value(n-1);
    cout << n;
}
 int main(){
    value(5);
 }