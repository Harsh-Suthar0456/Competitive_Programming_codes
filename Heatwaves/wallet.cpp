#include<iostream>
using namespace std;
int main(){
    int t;
    long long int a,b;
    cin >> t;
    for(int i=0;i<t;i++){
        cin >> a>>b;
        if((a+b)%2==0){
            cout << "Bob"<<endl;
        }
        else{cout << "Alice"<<endl;}
    }
}