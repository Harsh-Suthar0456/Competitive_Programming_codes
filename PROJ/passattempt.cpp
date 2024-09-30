#include<iostream>
using namespace std;

struct Point{
    double x,y;
    static int count;
    Point(){count++;}
    Point(double x1,double y1) : x(x1),y(y1){count++;}
};

int Point::count;

int main(){
    //Point a = Point(1,2);
    cout << Point::count;
}