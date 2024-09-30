#include<bits/stdc++.h>
#define ll long long
int test=1;
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> test;
    while(test--){
        ll n,rem1=0,rem2=0,ans=0;
        int k;
        cin >> n;
        for(int i=0;i<n;i++){
            cin >> k;
            ans+=k;
            if(k%3==1){
                rem1=1;
            }
            else if(k%3==2){
                rem2=1;
            }
        }
        if(ans%3==0){
            cout << 0<<endl;
        }
        else if(ans%3==1 && rem1==1){
            cout << 1<<endl;
        }
        else if(ans%3==2){
            cout << 1<<endl;
        }
        else{cout << 2<<endl;}
    }
}