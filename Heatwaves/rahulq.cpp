#include<iostream>
#include<algorithm>
#include<numeric>
#include<vector>
#define int long long
using namespace std;



signed main(){
    int t,n;
    cin>>t;
    while(t>0){
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        if(n==1 || n==2){
            cout<<0<<"\n";
        }
        else{
        vector<int> s,p;
        for(int i=0;i<n-1;i++){
            if(a[i]<=a[i+1]){
                s.push_back(a[i]);
            }
            else{
                p.push_back(a[i]);
            }
        }
        p.push_back(a[n-1]);
        int flag=0;
        for(int i=0;i<p.size()-1;i++){
            if(p[i]<p[i+1]){
                flag++;
            }
        }
        for(int i=0;i<s.size()-1;i++){
            if(s[i]<s[i+1]){
                flag++;
            }
        }
        cout<<flag<<"\n";
        }
        t--;
    }

    return 0;
}