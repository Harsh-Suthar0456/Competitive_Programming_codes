#include<iostream>
using namespace std;

#define MOD 1000000007

int main(){
    /*for(int i=0;i<240;i++){
        long long int r=1;
        for(int j=0;j<i;j++){
            r*=2;
            r= r%MOD;
        }
        cout << r<<", ";
    }*/
    for(int i=1;i<500;i++){
        cout<< "\"";
        for(int j=0;j<i;j++){
            cout << 0;
        }
        cout << "\", ";
    }
}