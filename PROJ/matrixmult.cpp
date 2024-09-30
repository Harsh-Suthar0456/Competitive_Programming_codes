#include<iostream>
using namespace std;

void assign(int (*arr)[100],int size){
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            cin >> arr[i][j];
        }
    }
}

void multAndPrint(int (*arr1)[100],int (*arr2)[100],int (*prod)[100],int size){
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            prod[i][j]=0;
            for(int k=0;k<size;k++){
             prod[i][j]+= (arr1[i][k])*(arr2[k][j]);
            }
            cout<<prod[i][j]<<" ";
        }
        cout << endl;
    }
}



int main(){
    int n;
    cin >> n;
    int a[100][100],b[100][100],c[100][100];
    assign(a,n);
    assign(b,n);
    multAndPrint(a,b,c,n);
    
    
}