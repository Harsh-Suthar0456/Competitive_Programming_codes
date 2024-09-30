#include<bits/stdc++.h>
#define ll long long
int test=1;
using namespace std;
int main(){
    //cin >> test;
    while(test--){
        int n;
        cin >> n;
        ll root=(1ll<<(n+1))-1;
        //cout << root;
        string p;
        cin >> p;
        int q=1;
        for(int i=0;i<p.length();i++){
            if(p[i]=='L'){
                root-=q;
                q*=2;
                //cout << ((1ll<<(i+1))-1);
            }
            else{root-=(q+1);
            q*=2;q++;}
        }
        cout << root;
    }
}