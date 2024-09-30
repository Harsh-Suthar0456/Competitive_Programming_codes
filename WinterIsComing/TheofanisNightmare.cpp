#include<iostream>
using namespace std;

int main(){
    int t,n;
    cin >> t;
    for(int i=0;i<t;i++){
        cin >> n;
        long int* input= new long int[n];
        long long int sumtn=0,answer=0;
        for(int i=0;i<n;i++){
            cin >> input[i];
            sumtn +=input[i];
        }
        answer=sumtn;
        for(int j=0;j<n;j++){
            sumtn -= input[j];
            if(sumtn>0){
                answer+=sumtn;
                
            }
        }
        cout << answer<<endl;
    delete[] input;
    }
    
}