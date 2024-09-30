#include <iostream>
using namespace std;

struct complex{
    double x,y;};

    complex add(complex a,complex b){
        complex k;k.x=a.x+b.x;k.y=a.y+b.y;
        return k;
    }
    complex subtract(complex a,complex b){
        complex k;k.x=a.x-b.x;k.y=a.y-b.y;
        return k;
    }
    complex multiply(complex a,complex b){
        complex k;k.x=a.x*(b.x)-(a.y)*(b.y);k.y=a.x*(b.y)+a.y*(b.x);
        return k;
    }


int main(){
    complex a,b;
    cin >> a.x>>a.y>>b.x>>b.y;
    complex m;
    m=add(a,b);
    cout << m.x<<endl<<m.y<<endl;
    m=subtract(a,b);
    cout << m.x<<endl<<m.y<<endl;
    m=multiply(a,b);
    cout << m.x<<endl<<m.y;
}