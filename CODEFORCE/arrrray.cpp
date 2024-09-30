#include<iostream>
using namespace std;
int main(){
    int c,b,a,arr[4]= {2,3,4,5};
    int *ptr = arr;
    ptr[3]=10;
    *(arr+2)=0;
    int r=10;
    int s=15;
    int *pttr = &r;
    cout<<&r<<endl<<&s<<endl;
    *(pttr-1)=200;
    
    cout << s<<endl<<arr[3];
    cout<<endl<<&a<<endl<<&b<<endl<<&c;
}