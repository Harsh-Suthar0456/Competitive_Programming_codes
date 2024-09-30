#include<iostream>
using namespace std;
int main(){
    int t,n,repeat[26],answer,unique;
    cin >> t;
    for(int tnum=0;tnum<t;tnum++){
        cin >> n;
        answer=0;unique=0;for(int i=0;i<26;i++){repeat[i]=0;}
        string input;
        cin >> input;
        for(int i=0;i<n;i++){
            if(repeat[input[i]-97]==0){repeat[input[i]-97]=1;unique++;}
            answer+=unique;
        }
        cout << answer<<endl;

    }
}