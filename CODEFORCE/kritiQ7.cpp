#include<iostream>
using namespace std;

string compa(char a[],char b[],int size){
    for(int i=0;i<size;i++){
        bool flag=0;
        for(int j=0;j<size;j++){
        if(a[j]==b[i]){flag=1;a[j]=b[i]='Z';break;}
        }
    if(flag==0){return "NO";}
    }
    return "YES";
}

int main(){
    char a[100],b[100];
    string word1,word2;
    cin >> word1>>word2;
    int leng1= word1.length();
    int leng2=word2.length();
    if(leng1!=leng2){cout<<"NO";return 0;}
    for(int i=0;i<leng1;i++){
        a[i]=word1[i];b[i]=word2[i];
    }
    cout << compa(a,b,leng1);
    
}