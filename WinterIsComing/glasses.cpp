#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t,n,input[200003],mult;
    long long int sum[200003];
    cin >> t;
    for(int tnum=0;tnum<t;tnum++){
        int flag=0;
        cin >> n;
        mult=1;
        sum[0]=0;
        for(int i=1;i<=n;i++){
            cin >> input[i];
            sum[i]=sum[i-1]+(mult)*input[i];
            mult *= -1;
        }
        sort(sum,sum+n+1);
        /*for(int i=0;i<=n;i++){
            cout << sum[i]<<" ";
        }*/
        for(int i=0;i<n;i++){
            if(sum[i]==sum[i+1]){flag=1;break;}
        }
        if(flag==1){cout << "YES"<<endl;}
        else{cout << "NO"<<endl;}
    }
}