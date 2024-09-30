#include<bits/stdc++.h>
int test;
#define mod 998244353
using namespace std;
int main(){
    cin >> test;
    while(test--){
        long long n,m;
        cin >> n>>m;
        long long x,y;
        x=max(n,m);
        y=min(n,m);
        long long xmin,xmax,ymin,ymax;
        xmin=(x+1)/2;
        xmax=(x+2)/2;
        ymin=(y+1)/2;
        ymax=(y+2)/2;
        long long int leverage=min(y/2,((x/2)-(y/2)));//leverage in y, max can be y/2
        long long int sumy=0,sumx=0,net;
        for(int i=xmin;i<=xmax;i++){
            sumx+=i;
        }
        if(ymax!=ymin){//y is even
        sumy=(ymax+ymin)*(min(y/2,leverage+1));}
        else{sumy=ymin*(leverage*2 +1);}//when y is odd
        sumx=sumx%mod;
        sumy=sumy%mod;
        net=sumx*sumy;
        net=net%mod;
        cout << net<<endl;
    }
}