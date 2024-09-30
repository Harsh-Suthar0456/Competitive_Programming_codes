#include<iostream>
using namespace std;
int counter=0;

struct Point{ float x;float y;
//Point(double p, double q){x=p;y=q;};
Point(double p, double q) : x(p),y(q){counter++;}
Point(){counter++;};
};
struct Circle{
    Point center;
    int radius;
};

int main()
{
   Point a,b;
   
   //Circle c;


   cout << counter;
}

