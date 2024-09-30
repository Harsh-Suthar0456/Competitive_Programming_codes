#include<iostream>
using namespace std;

struct point{
    double x;
    double y;
};
struct Circle{
    point center;
    double radius;
};

int main(){
    Circle c1={4,8};
    cout << c1.center.y;
}


