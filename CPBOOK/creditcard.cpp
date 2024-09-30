#include<bits/stdc++.h>
int test;
using namespace std;
int main(){
    cin >> test;
    while(test--){
        double r,b,m;
        cin >>r>>b>>m;
        r /=100;
        double b1=b;
        long long int answer=0;
        double interest;
        for(int i=1;i<=1200;i++){
            interest = (round(b*r*100))/100;
            b+= (interest);
            b=(round(b*100))/100;
            b-=m;
            //b=(round(b*100))/100.0;
            if(b>=b1){break;}
            if(b<0.001){answer=i;break;}
            //b.setprecision(2);
        }
        if(b>=0 && answer==0){cout << "impossible"<<endl;continue;}
        else{cout << answer<<endl;}
    }
}