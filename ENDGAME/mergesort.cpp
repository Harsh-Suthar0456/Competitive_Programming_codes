#include<iostream>
//#include<cmath>
using namespace std;

//need to define merge function before mergesort to use it in mergesort
void merge(int U[],int ulength,int V[],int vlength, int S[]){
    int ufront=0,vfront=0,sback=0;
    while(ufront<ulength || vfront <vlength){
        if(ufront<ulength && vfront<vlength){
            if(U[ufront]>=V[vfront]){
                S[sback]=U[ufront];
                ufront++;sback++;
            }
            else{ 
                S[sback]=V[vfront];
                vfront++;sback++;
            }
        }
        else if(ufront<ulength){
            S[sback]=U[ufront];ufront++;sback++;
        }
        else{S[sback]=V[vfront];vfront++;sback++;}
    }
}

void mergesort(int arr[],int n){
    if(n>1){int half=floor(n/2);
    int U[half],V[n-half];
    for(int i=0;i<half;i++){
        U[i]=arr[i];
    }
    for(int i=half;i<n;i++){
        V[i-half]=arr[i];
    }
    mergesort(U,half);
    mergesort(V,n-half);
    merge(U,half,V,n-half,arr);
    }

}

int main(){
    int a[100];
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    mergesort(a,n);
    for(int i=0;i<n;i++){
        cout << a[i]<<" ";
    }
}