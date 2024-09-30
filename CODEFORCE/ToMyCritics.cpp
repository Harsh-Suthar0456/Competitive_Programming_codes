#include<iostream>
using namespace std;
int main(){
    int t;
    cin >>t;
    int a[3][t],ans[t],mina[t];
    for(int i=0;i<t;i++){
        cin>>a[0][i]>>a[1][i]>>a[2][i];
        ans[i]=a[0][i]+a[1][i]+a[2][i];
        int mediator=min(a[0][i],a[1][i]);
        mina[i]=min(mediator,a[2][i]);

    }
    for(int i=0;i<t;i++){
        if(ans[i]-mina[i]>=10){cout << "YES"<<endl;}
        else{cout << "NO"<<endl;}
    }

}