#include<iostream>
using namespace std;
int main(){
    int arr[200001];
    
    int n;
    cin >>n;
    for(int i=1;i<=n;i++) arr[i]=0;
    int attendence[200001];for(int i=1;i<=n;i++) attendence[i]=0;
    int input[200001];
    for(int i=1;i<=n;i++){
        cin >> input[i];
    }
    for(int num=1;num<=n;num++){
        arr[input[num]]++;
        attendence[input[num]]=1;
        for(int multiple=1;(multiple*input[num]<=n);multiple++){
            if(attendence[multiple*(input[num])]==0){
                arr[multiple*(input[num])]=max(arr[multiple*(input[num])],arr[input[num]]);
            }
        }
    }
    int answer=0;
    for(int i=1;i<=n;i++){
        answer=max(answer,arr[i]);
    }
    cout << answer;
}