#include<iostream>
using namespace std;

void swapp(int &x,int &y){
    int inter = x;
    x=y;
    y=inter;
}

void reorder(int arr[],int size){
    for(int i=0;i<size;i++){
        for(int j=1;j<size;j++){
            if(arr[j-1]>arr[j]){swapp(arr[j-1],arr[j]);}
        }
    }}

int main(){
    int n;
    cin>>n;
    int a[n],initial[n];
    for(int i=0;i<n;i++){cin >> a[i];initial[i]=a[i];}
    reorder(a,n);
    for(int i=0;i<n;i++){cout<<a[i]<<" ";}
    cout << endl;
    for(int i=0;i<n;i++){
        cout << initial[i]-a[i]<<" ";
    }
}