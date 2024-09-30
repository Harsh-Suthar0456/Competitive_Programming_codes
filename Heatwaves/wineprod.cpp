#include<iostream>
#include<cmath>
#include<algorithm>

using namespace std;
int main(){
    long long int n;
    int a[500003],b[500003];
    long long int c[500003];
    long long int q,p,x,y,z;
        long long int leftover=0,wine=0;
        cin >> n>>q;
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        for(int i=0;i<n;i++){
            cin >> b[i];
        }
        for(int i=0;i<n-1;i++){
            cin >> c[i];
        }
for(int i=0;i<q;i++){
            cin >> p>>x>>y>>z;
            a[p-1]=x;
            b[p-1]=y;
            wine=0;leftover=0;
            for(int j=0;j<n;j++){
                if(leftover+a[j]<b[j]){
                    wine=wine + a[j]+leftover;
                    leftover=0;
                }
                else{
                wine+= b[j];
                leftover = leftover + a[j]-b[j];
                }
            }
            cout << wine<<endl;
        }
    }