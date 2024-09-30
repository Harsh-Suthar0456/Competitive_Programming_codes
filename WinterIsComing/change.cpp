#include<iostream>
using namespace std;
int n;int arr[30];
int costo(int i){
    int cost=0;
    for(int j=1;j<i;j++){
        cost+=(j)*arr[j];
    }
    for(int j=i+1;j<=n;j++){
        cost +=(n-j+1)*arr[j];
    }
    return cost;
}
int main(){
    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> arr[i];
    }
    int answer=0;
    while(n>0){
        int tempcost=100000;
        int index=0;
        for(int i=n;i>=1;i--){
            if(tempcost==costo(i)){index=(arr[i]>=arr[index])?i:index;}
            if(tempcost>costo(i)){index=i;}
            tempcost=min(costo(i),tempcost);
            
        }
        answer+=tempcost;
        for(int i=index+1;i<=n;i++){
            arr[i-1]=arr[i];
        }
        n--;
    }
    cout << answer;
}