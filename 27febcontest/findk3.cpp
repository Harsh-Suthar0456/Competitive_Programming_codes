#include<bits/stdc++.h>
#define ll long long
int test=1;
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> test;
    while(test--){
        ll l,a,b,ans=0;
        cin >> a>>b>>l;
        unordered_map<ll,ll> m;
        ll pa=1;
        for(int i=0;pow(a,i)<l+0.2;i++){
            ll pb=1;
            for(int j=0;pa*pow(b,j)<l+0.2;j++){
                if(l%(pa*pb)==0 && m[pa*pb]==0){ans++;m[pa*pb]=1;}
                pb*=b;
            }
            pa*=a;
        }
        cout << ans<<endl;
    }
}