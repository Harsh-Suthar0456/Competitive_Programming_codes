#include<bits/stdc++.h>
int test;
using namespace std;
int main(){
    string n,m;
    cin >> n>>m;
    string t;
    long long power=m.length()-1;
    int l=n.length();
    while(n[l-1]=='0' && l>1 && power>0){
        power--;
        l--;
    }
    //cout <<power<<" "<<l<<endl;
    int l1=l;// to prevent l from updating in the below loop
    if(l1<=power){
        for(int i=0;i<=power-l1;i++){
            t+="0";
            l++;
        }
        t.insert(1,".");
        l++;
        n.insert(0,t);
    }
    else if(power==0){}
    else if(l>power){
        n.insert(l-power,".");
        l++;
    }
    for(int i=0;i<l;i++){
        cout << n[i];
    }
    
}