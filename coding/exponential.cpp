#include <iostream>
using namespace std;

double factorial(int x){
    double mult=1;
    for(double i=1;i<=x;i++){
        mult *=i;
    }
    return mult;
}

int main(){
    
    double x, sum=0.0;
    cout << "enter the power of e required: ";
    cin >> x;
    double num = x;
    
    for(int i=0;i<15;i++){
        sum += (pow(num, i))/factorial(i);
    }
    cout << sum;
    return 0;
}