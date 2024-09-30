#include<iostream>
using namespace std;
int main(){
    int t,a,b,c;
    cin >> t;
    for(int testnum=0;testnum<t;testnum++){
        cin >> a>>b>>c;
        if(a==b){cout << c<<endl;}
        else if(a==c){cout << b<<endl;}
        else{cout << a<<endl;}
    }
}