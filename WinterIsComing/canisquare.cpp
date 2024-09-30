#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int t,n;
    cin >> t;
    for(int tnum=0;tnum<t;tnum++){
        cin >> n;
        long long int sum=0,input;
        for(int i=0;i<n;i++){
            cin >>input;
            sum+=input;
        }
        long long int root=sqrt(sum);
        if(root*root == sum){cout << "YES"<<endl;}
        else{cout << "NO"<<endl;}
    }
}