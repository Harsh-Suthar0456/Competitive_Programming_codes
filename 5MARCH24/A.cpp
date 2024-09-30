#include<bits/stdc++.h>
#define ll long long
int test=1;
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> test;
    while(test--){
        ll n;
        cin >> n;
        string s;
        cin >> s;
        string s2=s;
        reverse(s2.begin(),s2.end());
        ll len=s.length();
        if(s.compare(s2)<0){
            cout << s<<endl;
        }
        else if(s.compare(s2)==0){
            cout << s<<endl;
        }
        else{
            cout << s2+s<<endl;
        }
    }
}