#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin >> t;
    long long int n;
    long long int in;
    for(int tnum=0;tnum<t;tnum++){
        cin >> n;
        long long int cost=0,top[2],current=0;
        top[1]=10000000;
        top[0]=10000000;
        cin >> top[0];
        for(int i=0;i<n-1;i++){
            cin >> in;
            if(in > top[current]){
                if(in > top[1-current]){cost++;top[current]=in;}
                else{top[1-current]=in;}
            }
            else{top[current]=in;}
            current=(top[0]>top[1])?1:0;
        }
        cout << cost<<endl;
    }
}