#include<iostream>
using namespace std;
int main(){
    int t,x,a[4],success[20]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, intermediate;
    cin >> t;
    
    for(int tnum=1;tnum<=t;tnum++){
    
        cin >> x;
        cin >> a[1] >> a[2] >> a[3];
        
        if(a[x]==0){success[tnum]=1;}
        intermediate = a[x];
        
        
        if(a[intermediate]==0){success[tnum]=1;}
        
    
    }
     for(int tnum=1;tnum<=t;tnum++){
        if(success[tnum]==0){cout << "YES"<<endl;}
        else{cout<<"NO"<<endl;}
     }
}