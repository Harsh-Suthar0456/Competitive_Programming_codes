#include<iostream>
using namespace std;
int main(){
    double xL=-1.5707963,xR=1.5707963;
    double x; cin >> x;
    double xM;
    while(xR-xL >0.000001){
        xM=(xL+xR)/2;
        if(sin(xM)>x){xR=xM;}
        if(sin(xM)<x){xL=xM;}
        if(sin(xM)==x){break;}
    }
    cout << xM;
}