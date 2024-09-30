#include<iostream>
using namespace std;
int main(){
    int t;
    long double x[1000],y[1000];
    cin >> t;
for(int i=1;i<=t;i++){
    cin>>x[i]>>y[i];
}
for(int i=1;i<=t;i++){
    if(x[i]-y[i]>1){
        cout << "yes"<<endl;
    } else{ cout<<"no"<<endl;}
}
}