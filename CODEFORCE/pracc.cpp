#include<iostream>
using namespace std;
void c(int n){
    if(n%2==1){for(int i=1;i<=(n+1)/2;i++){cout << i;} for(int i=(n-1)/2;i>0;i--){cout<<i;}}
    if(n%2==0){for(int i=1;i<=n/2;i++){cout<<i;} for(int i=n/2;i>0;i--){cout<<i;}}
}
int main(){
   c(5);
}