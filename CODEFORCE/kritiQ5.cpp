#include<iostream>
using namespace std;
int* maxv(int* a,int n){
    int* q;
    int p=a[0];
    for(int i=0;i<n;i++){
    p=max(a[i],p); if(p==a[i]){q=&a[i];}
    
    }
    return q;
}
int* minv(int* a,int n){
    int* q;
    int p=a[0];
    for(int i=0;i<n;i++){
    p=min(a[i],p); if(p==a[i]){q=&a[i];}
    
    }
    return q;
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){cin >> arr[i];}
    cout << minv(arr,n)-maxv(arr,n);
    

}