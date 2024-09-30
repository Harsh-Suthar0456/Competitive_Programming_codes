#include<iostream>
using namespace std;

/*int bfinder(const string& result,int l){
    int index=-1;
        for(int k=l-1;k>=0;k--){
            if(result[k]>94 && result[k]!='b'){index=k;return index;}
        }
        return -1;
}

int Bfinder(const string& result,int l){
    int index=-1;
        for(int k=l-1;k>=0;k--){
            if(result[k]<92 && result[k]!='B'){index=k;return index;}
        }
        return -1;
}*/

int main(){
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        string input;
        cin >> input;
        for(int k=0;input[k]!='\0';k++){
            if(input[k]=='b'){
                //input[bfinder(input,k)]='b';
                for(int n=k-1;n>=0;n--){
                    if(input[n]>94 && input[n]!='b'){input[n]='b';break;}
        }
                continue;
            }
            if(input[k]=='B'){
                //input[Bfinder(input,k)]='b';
                for(int n=k-1;n>=0;n--){
                    if(input[n]<92 && input[n]!='B'){input[n]='b';break;}
        }
                continue;
        }
        }
        int keeper=0;
        for(int l=0;input[l]!='\0';l++){
            if(input[l]!='b' && input[l]!='B'){cout<<input[l];}
        }
        cout << endl;
        //answer[keeper]='\0';
    
        
}
}