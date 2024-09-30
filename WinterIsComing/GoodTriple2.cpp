#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        int n;
        cin >> n;
        long long int answer=1;
        while(n>0){
            answer*= ((n%10)+1)*((n%10)+2)/2;
            n = n/10;
        }
        cout << answer<<endl;
    }

}