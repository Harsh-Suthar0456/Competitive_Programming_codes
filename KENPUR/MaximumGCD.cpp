#include<bits/stdc++.h>
int test;
using namespace std;
int main(){
    cin >> test;
    while(test--){
        long long n;
        cin >> n;
        int n1=n;
        vector<pair<int,int> > prime;
        int num=2;int power;
        while(n1>1 && num<n1){
            if(n1%num==0){
                power=0;
                while(n1%num==0){
                    n1 /= num;
                    power++;
                }
                
            }
            num++;
        }
        long long answer=1;
        for(int i=0;i<prime.size();i++){
            answer *= pow(prime[i].first,prime[i].second-1);
        }
        cout << answer<<endl;
    }
}