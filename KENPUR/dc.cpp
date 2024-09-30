#include<bits/stdc++.h>
int test;
using namespace std;
int main(){
    cin >> test;
    while(test--){
        long long n;
        cin >> n;
        string input;
        cin >> input;
        int flag=0;
        int answer=1000;
        for(int i=0;i<n-1;i++){
            if( input[i]=='a' && (input[i]==input[i+1])){
                answer=2;flag=1;
                //break;
            }
            else if(i<n-2){
                if((input[i]==input[i+2]) && input[i]=='a'){
                answer=min(answer,3);flag=1;
                //break;
            }
            }
            else if(i<n-3){
                if((input[i]==input[i+3]) && input[i]=='a'){
                    if(input[i+1]+input[i+2]=='b'+'c')
                    {answer=min(answer,4);flag=1;}
            }
            }
            else if(i<n-6){
                if((input[i]=='a' && input[i]==input[i+3] && input[i]==input[i+6])){
                    if(input[i+1]+input[i+2]+input[i+4]+input[i+5]=='b'+'c'+'b'+'c')
                    {answer=min(answer,7);flag=1;}
            }
        }
        
        
    }
    if(flag==0){answer=-1;}
    cout << answer<<endl;
}
}
