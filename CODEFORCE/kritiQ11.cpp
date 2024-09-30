#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[1000];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int dividor,sum;
    cin >> dividor;
    int lengofsubarr=1;
    for(int i=0;i<n;i++){
        sum=0;
        for(int j=i;j<n;j++){
       sum+=arr[j];
       if(sum%dividor==0 && sum!=arr[j]){cout<<"true";return 0;}
       if(arr[j]==0 && arr[j+1]==0){cout<< "true";return 0;}
    }
    
}
cout<<"false";
}