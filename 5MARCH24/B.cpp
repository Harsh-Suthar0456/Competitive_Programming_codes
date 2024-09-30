#include<bits/stdc++.h>
#define ll long long

using namespace std;
int test=1;ll n;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> test;
    while(test--){
        
        cin >> n;
        ll a[n];
        map<ll,ll> m;ll ma=-1;
        for(int i=0;i<n;i++){
            cin >> a[i];
            m[a[i]]+=1;
            ma=max(ma,a[i]);
        }
        ll mex=0;
        for(int i=0;i<ma+62;i++){
            if(m[i]==0){
                mex=i;break;
            }
        }
        
        if(mex==0){cout << 2<<endl<<1<<" "<<1<<endl<<2<<" "<<n<<endl;continue;}
        ll arr[mex];for(int i=0;i<mex;i++){arr[i]=1000000;}
        for(ll i=0;i<n;i++){
            if(a[i]<mex){
                arr[a[i]]=min(arr[a[i]],i);
            }
        }
        ll v=-1;
        for(int i=0;i<mex;i++){v=max(v,arr[i]);}
        for(int i=0;i<=v;i++){
m[a[i]]-=1;
            
                                
        }
        int ff=0;
        for(int i=0;i<mex;i++){
            if(m[i]<1){
                cout << -1<<endl;ff=1;break;
            }
        }
        if(ff==0){cout << 2<<endl<<1<<" "<<v+1<<endl<<v+2<<" "<<n<<endl;}
    }
}