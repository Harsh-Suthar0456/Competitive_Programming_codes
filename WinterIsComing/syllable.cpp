#include<iostream>
using namespace std;
int main(){
    int t,n;
    string input;
    cin >> t;
    for(int tnum=0;tnum<t;tnum++){
        cin >> n>>input;
    
    for(int i=n-2;i>=1;i--){
        if((input[i]=='b' || input[i]=='c' || input[i]=='d')
        && (input[i+1]=='a' || input[i+1]=='e'))
        input.insert(i,".");
    }
    cout << input<<endl;
    }
}