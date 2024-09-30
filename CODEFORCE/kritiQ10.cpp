/*#include<iostream>
using namespace std;
int main (){
    int n, arr[1000],target,count,maxsum=0;
    cin >> n;
    int answer=n;
    for(int i=0;i<n;i++){
        cin  >> arr[i];
        maxsum+=arr[i];
    }
    cin >> target;
    for(int i=0;i<n;i++){
        int sum=0,increase=0,count=0;
        while(sum <=target && i+increase<n){
            sum+=arr[i];
            count++;
            increase++;
        }
        if(sum>=target){answer=min(answer,count);};

    }
    if(maxsum>=target){cout<<answer;}
    else cout<< 0;
}*/


#include<iostream>
using namespace std;
int main (){
    int n, arr[1000],target,count,maxsum=0;
    cin >> n;
    int answer=n;
    for(int i=0;i<n;i++){
        cin  >> arr[i];
        maxsum+=arr[i];
    }
    cin >> target;
    
    }

