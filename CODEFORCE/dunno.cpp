#include<iostream>
using namespace std;

int main(){
    int a,b;
    cin >> a>>b;
    int arr[100][100];
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cin >> arr[i][j];
        }
    }
if(arr[0][0]==1 && arr[0][b-1]==1 && arr[a-1][0]==1 && arr[a-1][b-1]==1)
{cout << 1;}
else{cout << 0;}}


