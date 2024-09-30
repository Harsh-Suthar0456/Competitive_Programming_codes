#include<iostream>
#include<string>
using namespace std;

int intleng(int n){
    int i=0;
    while(n>0){n=n/10;i++;}
    return i;
}

void proto(long int ip,string IPstr){
    int leng=IPstr.length();
    if(leng!=intleng(ip)){return;}
    for(int i=1;i<leng;i++){
        int power;
        int part1=ip/(pow(10,leng-i));
        if(part1>255) continue;
        IPstr.insert(i,1,'.');


        for(int j=i+2;j<leng+1;j++){
            power=pow(10,leng-i);
            int part2=(ip%power)/pow(10,leng+i-j-2);
            if(part2>0){if(IPstr[i+1]=='0') {continue;}}
            if(part2>255) continue;
            IPstr.insert(j,1,'.');


            for(int k=j+2;k<leng+3;k++){

                int potato =pow(10,(leng+1)-j);
                int part3=(ip%potato)/pow(10,leng+j-k-4);
                if(part3>0){if(IPstr[j+1]=='0') {continue;}}
                if(part3>255) continue;
                power=pow(10,leng-k+2);
                int part4=(ip%power);
                if(part4>0){if(IPstr[k]=='0'){continue;}}
                if(part4>255) continue;
                IPstr.insert(k,1,'.');
                cout << IPstr<<"  "<<IPstr[k+1]<<" "<<j<<" "<<k<<endl;
                IPstr.erase(k,1);
            }
            IPstr.erase(j,1);
        }
        IPstr.erase(i,1);
    }
}

void checker(char* address){
    
}

int main(){
    string IPstr;
    cin >> IPstr;
    long int ip;
    ip=stol(IPstr);
    proto(ip,IPstr);
    //cout << ip;
}