#include<iostream>
using namespace std;
int main(){
    int n,k, marks[1000],count=0;
    
    cin >> n>>k;
   
    
    for(int i=1;i<=n;i++){
    cin >>marks[i];
    }
    for(int i=1;i<=n;i++){
        if(marks[i]>=marks[k] && marks[i]>0){
            count++;
        }
    }
    cout << count;
}