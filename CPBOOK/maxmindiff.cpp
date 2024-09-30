#include<bits/stdc++.h>
int test=1;
using namespace std;
int main(){
    cin >> test;
    while(test--){
        int n,k;
        cin >>n>>k;
        int a[n];
        int nbyk=n/k;
        int plusone=n-nbyk*k;
        a[0]=nbyk+(plusone>0);a[1]=n-nbyk+1-(plusone>1);
        for(int i=2;i<k;i++){
            if(i<plusone){
                if(i%2==0){
                a[i]=a[i-2]+1+nbyk;
                }
                else{
                    a[i]=a[i-2]-1-nbyk;
                }
            }
            else{
                if(i%2==0){
                    a[i]=a[i-2]+nbyk;
                    }
                else{
                    a[i]=a[i-2]-nbyk;
                }
        }
        }
        for(int i=k;i<n;i++){
            if(i%2==0){
                a[i]=a[i-k]-1;
            }
            else{a[i]=a[i-k]+1;
            }
        }
        for(int i=0;i<n;i++){
            cout << a[i]<< " ";
        }
        cout << endl;
    }
}