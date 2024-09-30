#include<bits/stdc++.h>
#define ll long long
int test=1;
using namespace std;
int main(){
    cin >> test;
    while(test--){
        int n;
        cin >> n;
        ll a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        sort(a,a+n);
        if(a[0]==a[1]){
            int flag=0;
            for(int i=2;i<n;i++){
                if(a[i]==a[0]){
                    continue;
                }
                else if(a[i]%a[0] !=0){
                    flag=1;break;
                }
            }
            if(flag==1){
                cout << "YES"<<endl;
            }
            else{cout << "NO"<<endl;}
        }
        else{
            cout << "YES"<<endl;
        }
    }
}