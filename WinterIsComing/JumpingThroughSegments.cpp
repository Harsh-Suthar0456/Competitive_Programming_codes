#include<iostream>
#include<cmath>
using namespace std;

int mindi(int a1,int a2,int a3, int a4){
    int temp;
    temp=min(min(abs(a1-a3),abs(a1-a4)),min(abs(a2-a3),abs(a2-a4)));
    return temp;
}

int main(){
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        int n;
        cin >>n;
        long int pright=0,pleft=0;
        long int right=0,left=0;
        int k=0;
        for(int j=0;j<n;j++){
            int minsep;
            cin >> left>>right;
            minsep=mindi(pleft,pright,left,right);
            int lamao=ceil((1.00*left)/(j+1));
            //cout << lamao<<"potato"<<endl;
            k=max(k,minsep);k=max(k,lamao);
            pleft=left;pright=right;
        }
        cout << k<<endl;
    }
}