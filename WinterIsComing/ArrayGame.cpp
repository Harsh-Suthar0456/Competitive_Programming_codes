#include<iostream>
using namespace std;

int main(){
    int t,n,k;
    cin >> t;
    for(int i=0;i<t;i++){
        cin >> n>>k;
        int* input=new int[n];
        for(int j=0;j<n;j++){
            cin >> input[j];
        }
        
        delete[] input;
    }
}