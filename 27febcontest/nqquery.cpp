#include<bits/stdc++.h>
#define ll long long
int test=1;
int n;
ll a[100005],s[100004];
using namespace std;
int ss(int le,int u,int ri){
    int mid=n;
    if(le==ri){return mid;}
    while(le<ri){
        mid=(ri+le)>>1;
        if(s[mid]==u){
            return mid;
        }
        else if(s[mid]>=u){ri=mid;}
        else{le=mid+1;}
    }
    while (mid > -1 && s[mid] > u)
        {mid--;}

    if(abs(s[mid]-u)<abs(s[mid+1]-u)){
        return mid;
    }
    else{return mid+1;}
}
int main(){
    /*ios_base::sync_with_stdio(false);
    cin.tie(nullptr);*/
    cin >> test;
    while(test--){
        cin >> n;
        s[0]=0;
        for(int i=1;i<=n;i++){
            cin >> a[i];
            s[i]=s[i-1]+a[i];
        }
        int q,l,u,ans;
        cin >> q;
        for(int i=0;i<q;i++){
            cin >> l>>u;
            u=u+s[l-1];
            ans=ss(l,u,n);
            if(ans<l){
                cout << l<<" ";
            }
            else{cout << ans<<" ";}
        }
        cout<< endl;
    }
}