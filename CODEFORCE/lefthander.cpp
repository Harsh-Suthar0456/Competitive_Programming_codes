#include<iostream>
using namespace std;
int main(){
    int l,r,a;
    cin >>l>>r>>a;
    int maxa=max(l,r);
    int mina=min(l,r);

    while(maxa > mina && a>0){
        mina+=1; a-=1;
    }
    while(maxa==mina && a>=2){
        mina+=1;maxa+=1;a-=2;
    }
    cout << 2*mina;
}