#include<iostream>
using namespace std;
int& hell(int &x, int &y){
   return (x>y)? x:y;
}
int main(){
    int a,b;
    cin >> a>>b;
    hell(a,b)=100;
    cout << hell(a,b);
}