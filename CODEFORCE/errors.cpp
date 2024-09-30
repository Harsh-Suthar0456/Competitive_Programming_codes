#include<iostream>
using namespace std;

int main(){
    int *ptr1,*ptr2,*ptr3,*ptr4;
    ptr1= new int;
    //ptr3= new int;
    ptr4=new int;
    ptr2=ptr1;
    ptr3=ptr1;
    *ptr2=5;
    cout<<*ptr2<<*ptr1<<endl;
    delete ptr1;
    cout << *ptr3<<*ptr4<<endl;

}