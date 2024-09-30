#include<bits/stdc++.h>
int test,n,k;
using namespace std;
int main(){
    cin >> n>>k;
    priority_queue<int> maxk;
    int a;
    for(int i=0;i<n;i++){
        cin >> a;
        maxk.push(-a);
        if(maxk.size()>k){
            maxk.pop();
        }
    }
    // can use a reverser array to reverse the output to descending order
    for(int i=0;i<k;i++){
        cout<< -maxk.top()<<" "<<endl;
        maxk.pop();
    }
}