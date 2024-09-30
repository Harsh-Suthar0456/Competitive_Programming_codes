#include<iostream>
using namespace std;

/*int main(){
    int n;
    cin >> n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int target;
    cin >> target;
    int* change=new int[target];
    
    for(int i=0;i<n;i++){change[i]=0;}
    for(int i=0;i<n;i++){
        if(arr[i]>target){continue;}
        if(arr[i]>(target/2)){
            change[target-arr[i]] += 100*(i+1);
            if(change[target - arr[i]] >100*i){
                cout<< ((change[target - arr[i]])/100)-1<<endl<<((change[target - arr[i]])%100)-1;
                delete[] change;
                return 0;
                }
            }
        else{
            change[arr[i]]+=i+1;
            if(change[arr[i]] >100){
                cout<< ((change[arr[i]])/100)-1<<endl<<((change[arr[i]])%100)-1;
                delete[] change;
                return 0;
                }
            }
    }
    delete[] change;
}
*/