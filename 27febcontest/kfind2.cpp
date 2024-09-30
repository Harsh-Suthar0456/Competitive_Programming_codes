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
        map<ll,ll> m;
        ll t=k;
        ll tt=k;
        while(tt%a==0){
            if(m[tt]==1){
                tt/=a;
                continue;
            }
            ans++;
            t=tt;
            m[tt]=1;
            while(t%b==0){
                if(m[t]==1){
                    t/=b;continue;
                }
                t/=b;
                ans++;
                m[t]=1;
            }
            tt/=a;
        }
        cout << ans<<endl;
    }
}