#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    long double answer[t];
    for(int i=1;i<=t;i++){
        int n;
        cin >> n;
        long double c[n],r[n],Csum=0,Rsum=0,Cmin=10e5,Rmin=10e5;
        
        for(int j=0;j<n;j++){
            cin >> c[j];
            Csum += c[j];
            Cmin = min(c[j],Cmin);
        }
        for(int j=0;j<n;j++){
            cin >> r[j];
            Rsum += r[j];
            Rmin = min(r[j],Rmin);
        }
        
        answer[i] = min(Rsum+n*Cmin,Csum+n*Rmin);
    
    }
    for(int i=1;i<=t;i++){
        cout << answer[i];
    }
}