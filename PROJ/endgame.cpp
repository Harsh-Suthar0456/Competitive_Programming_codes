#include<iostream>
using namespace std;

void rotateclock(int a[100][100],int b[100][100],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            b[j][n-i-1]=a[i][j];
        }
    }
}

int main(){
    int n,a[100][100],b[100][100];
    cin >> n;
    
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
        cin >> a[i][j];
    }
    }
rotateclock(a,b,n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
        cout << b[i][j] <<" ";
    }
    cout<<endl;
    }

}