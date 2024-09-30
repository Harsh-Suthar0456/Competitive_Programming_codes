#include <iostream>
using namespace std;
double factorial(double r){
    double inter;
    inter = 1;
    while(r>=1){
        inter = inter * r;
        r=r-1;
    } 
    return inter;
}
int main(){
    double n, k, mid, t;
    n=25.0;
    k=1.0;
    mid=0.0;
    while(n >= k){
    t = (pow(k, n-k))/(factorial(n-k)*factorial(k));
    mid=mid+t;
    k=k+1;
   }
   cout << mid;
}