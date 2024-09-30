#include<iostream>
using namespace std;
int main(){
    int t,n,input[100],sign=1,nzind=0;
    cin >> t;
    for(int tnum=0;tnum<t;tnum++){
        cin >> n;
        sign=1;
        for(int i=0;i<n;i++){
            cin >> input[i];
            if(input[i]!=0){nzind=i;}
            if(input[i]>0){sign*=1;}
            else if(input[i]==0){sign*=0;}
            else{sign *= -1;}
        }
        if(sign ==-1 || sign ==0){cout << 0<<endl;}
        else{cout << 1<<endl<<nzind+1<< " "<<0<<endl;}
    }
}
