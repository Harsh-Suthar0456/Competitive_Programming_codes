#include<iostream>
using namespace std;



int intleng(int n){
    int i=0;
    while(n>0){n=n/10;i++;}
    return i;
}

int stringleng(string IPstr){
    int i=0;
    while(IPstr[i]!='\0'){i++;}
    return i;
}

int value(string IPstr,int u,int v){
    int val=0;
    for(int i=u;i<=v;i++){
        val+=(IPstr[i]-'0')*pow(10,v-i);
    }
    return val;
}

void printer(string IPstr,int a,int b,int c){
    int leng= stringleng(IPstr);
    for(int i=0;i<leng;i++){
        cout << IPstr[i];
        if(i==a || i==b || i==c){cout << '.';}
    }
    cout << endl;
}

void proto(string IPstr){
    int leng=stringleng(IPstr);

    for(int i=0;i<leng-1;i++){
        int crime1=i;
        if(value(IPstr,0,crime1)>255){continue;}
        if(IPstr[0]=='0'){crime1=0;}
        if(i>crime1){continue;}
        for(int j=crime1+1;j<leng-1;j++){
            int crime2=j;
            if(value(IPstr,crime1+1,crime2)>255){continue;}
            if(IPstr[crime1+1]=='0'){crime2=crime1+1;}
            if(j>crime2){continue;}
            for(int k=crime2+1;k<leng-1;k++){
                int crime3=k;
                if(value(IPstr,crime2+1,crime3)>255){continue;}
                if(IPstr[crime2+1]=='0'){crime3=crime2+1;}
                if(crime3==leng-2 && IPstr[leng-1]=='0'){printer(IPstr,crime1,crime2,crime3);}
                if(IPstr[crime3+1]=='0'){continue;}
                if(value(IPstr,crime3+1,leng-1)<256){printer(IPstr,crime1,crime2,crime3);}
                }
            }

        }
    }
    

int main(){
    string IPstr;
    cin >> IPstr;
    proto(IPstr);
    
}
