#include<iostream>
using namespace std;
int main(){
    int n,v1,v2,v3,sum,total=0;
    cin >> n;
    for(int i=1;i<=n;i++){
        cin >>v1>>v2>>v3;
        sum=v1+v2+v3;
        if(sum>=2){total++;}
    }
    cout << total;
}