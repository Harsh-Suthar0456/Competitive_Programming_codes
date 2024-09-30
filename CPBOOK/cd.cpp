#include<bits/stdc++.h>
#define ll long long
int test=1;
using namespace std;
int main(){
    //cin >> test;
    while(test--){
       ll n,m,a;
       cin >> n>>m;
       unordered_set nn;
       for(int i=0;i<n+m;i++){
        cin >> a;
        nn.insert(a);
       }
       cin >>a;
       cin >>a;
       ll tot=nn.size();
       cout << n+m-tot;
    }
}