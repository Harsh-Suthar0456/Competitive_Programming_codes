#include<iostream>
using namespace std;
int main(){
    double a,b;
    cout << "enter the limits: ";
    cin>>a>>b;
    double width = 1.0/1000;
    double i=a, inte=0;
    while(i<b){
        inte += (width/6)*((1.0/i)+4*(1/(i+0.5*width))+(1/(i+width)));
        i +=width;
    }
    cout << inte;
}