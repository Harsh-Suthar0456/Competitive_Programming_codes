#include<iostream>
using namespace std;
struct num{
    int value;
    int index;
};
int main(){
    num max1;
    num max2;
    int n,input;
    cin>> n;
    cin>>input;max1.value=input;max1.index=0;
    cin>>input;
    if(input>max1.value){
            max2.value=max1.value;
            max2.index=max1.index;
            max1.value=input;
            max1.index=1;
            }
            else{max2.value=input;max2.index=1;}
    for(int i=2;i<n;i++){
        cin>>input;
        if(input>max1.value){
            max2.value=max1.value;
            max2.index=max1.index;
            max1.value=input;
            max1.index=i;
            }
            else if(input>max2.value){
                max2.value=input;
                max2.index=i;
            }
    }
    cout<<max2.index<<endl<<max2.value;
}