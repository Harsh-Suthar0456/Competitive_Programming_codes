#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    if(n==1){cout << 1<<" "<<0;return 0;}
    int k=n;
    int i=2;
    int holdind=0;
    int freq=0;
    int pass1=0;
    long long int prod=1;
    int numofpro=0;
    int flag=0,flag2=0;
    while(k>1 && i<=k){
        int fre=0;int flag3=0;
        if(k%i==0){
            prod*=i;
            flag2=1;
            flag3=1;
            while(k%i ==0){
                k /=i;
                fre++;
        }
        }
        if(pass1==1 && flag3==1){if(freq!=fre){flag=1;}}
        pass1=flag2;
        freq=max(freq,fre);
        i++;
    }
    //if(freq==1){numofpro=0;}
    int power=1;//cout << numofpro<<endl;
    while(freq>power){
        numofpro++;
        power*=2;
    }
    //cout << numofpro<<flag<<endl;
    if(freq !=1 && (freq !=power || flag==1)){numofpro++;}
    
    cout << prod<<" "<<numofpro;
}