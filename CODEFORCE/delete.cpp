#include<iostream>
using namespace std;

int main(){
    int arr[4]={1,2,3,4};
    delete arr;
    cout << arr[3];
}