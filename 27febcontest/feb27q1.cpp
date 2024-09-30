#include<bits/stdc++.h>
#define ll long long
int test=1;
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> test;
    while(test--){
        ll n,k,sum=0;
        cin >> n;
        for(ll i=0;i<n;i++){
            cin >> k;
            sum+= abs(k);

        }
        cout << sum<<endl;
    }
}