#include<bits/stdc++.h>
#define ll long long
int test=1;
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> test;
    while(test--){
        ll a,b,k,ans=1;
        cin >> a>>b>>k;
        ll x=0,y=0;
        ll tmp=k;
        while(tmp%a==0){
            x++;
            tmp/=a;
        }
        tmp=k;
        while(tmp%b==0){
            y++;
            tmp/=b;
        }
        ans+=x;ans+=y;
        tmp=k;
        ll ad=k;
        while(ad%b==0){
            ad/=b;
            tmp=ad;
            while(tmp%a==0){
            ans++;
            tmp/=a;
        }
        }
        cout << ans<<endl;
    }
}