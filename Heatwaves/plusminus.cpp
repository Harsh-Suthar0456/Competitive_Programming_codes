#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin >> t;
    long long int n,a,b;
    string input;
    for(int i=0;i<t;i++){
        a=0;b=0;
        cin >> n;
        cin >> input;
        for(int j=0;j<n;j++){
            if(input[j]=='-'){
                a++;
            }
            else{b++;}
        }
        cout << abs(a-b)<<endl;
    }
}