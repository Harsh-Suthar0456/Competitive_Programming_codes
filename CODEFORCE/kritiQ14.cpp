#include<iostream>
using namespace std;

int main(){
    int n,k,sum=0;
    cin>>n>>k;

    int* arrptr = new int[n];
    for(int i=0;i<n;i++){
        cin >> *(arrptr+i);
        if( (*(arrptr+i))>k){sum += (*(arrptr+i));}
    }
    cout << sum;
    delete[] arrptr;
}
