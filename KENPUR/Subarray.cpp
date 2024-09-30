#include<bits/stdc++.h>
int test;
using namespace std;
int main(){
    long long n,x,ans=0;
    cin >> n>> x;
    unordered_map<int,int> sum;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    long long csum=0;
    for(int i=0;i<n;i++){
        csum+= a[i];
        
        if(sum.count(csum-x)!=0){
            ans+= sum[csum-x];
        }
        if(csum==x){
            ans++;
        }
        sum[csum]+=1;
        //cout<<sum.find(csum-x)->first<<" hello"<<endl;
    }
    cout << ans<<endl;
}