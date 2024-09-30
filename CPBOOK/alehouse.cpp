#include<bits/stdc++.h>
#define ll long long
int test=1;
using namespace std;
int main(){
    //cin >> test;
    while(test--){
        ll n,k;
        cin >> n>>k;
        multimap<ll,bool> t;
        ll a,b;
        for(int i=0;i<n;i++){
            cin >>a>>b;
            a=max(a-k,0ll);
            t.insert(make_pair(a,1));
            t.insert(make_pair(b,0));
        int o=0,maxo=0;
        for(auto x:t){
            cout << x.first<<" "<<x.second<<endl;
            if(x.second==1) o++;
            else{o--;}
            maxo=max(o,maxo);
        }
        cout << maxo;
    }//this wont work as multimap cant be sorted by values, so better is to use vector
    //of pairs as it can be sorted by values by specifying a sorting function 
}