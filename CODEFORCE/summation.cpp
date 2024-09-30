#include<iostream>
using namespace std;
int main(){
    int n;
    cout<< "enter n: ";
    cin >> n;
    int a, tsum=0,seqsum=0;
    for(int i=1;i<=n;i++){
        cin >> a;
        tsum +=a;
        if(tsum<0){tsum=0;}
        if(seqsum<=tsum){
            seqsum = tsum;
        }
    }
    cout << seqsum;
    
    }
