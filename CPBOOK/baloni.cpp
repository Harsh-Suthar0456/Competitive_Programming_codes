#include<bits/stdc++.h>
int test;
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    map<int,int> ma;
    long long int count=0;
    for(int i=0;i<n;i++){
        if(ma[a[i]]==0){ma[a[i]-1]++;count++;}
        else{ma[a[i]-1]++;ma[a[i]]--;}
    }
    cout << count;
}