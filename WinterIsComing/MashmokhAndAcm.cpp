#include<iostream>
using namespace std;
long long int L=1000000007;
/*int data(int n, int k){
    if(n==1){return 1;}
    else if(n==2 || n==3 || n==5 || n==7){return k;}
    else if(n==6){return k*k;}
    else if(n==4 || n==9){return ((k*(k+1))/2);}
    else{return (((k)*(k+1)*(k+2))/6);}
}*/
long double powered(int k,int freq){
    long long int sum=1,prod=1;
    long double summ=1;
    for(int i=0;i<freq;i++){
        summ*= (1.0*(k+i))/(i+1);
        int k=0;
        while(summ>L){
            summ -=L;
            k++;
        }
        summ-=k*7;
    }
    return summ;
    /*if(freq==1){return k;}
    else if(freq==2){return ((k*(k+1))/2);}
    else if(freq==3){return (((k)*(k+1)*(k+2))/6);}
    else if(freq==4){return (((((((k)*(k+1)*(k+2))%L)*(k+3))%L))/24);}
    else if(freq==5){return (((((((k)*(k+1)*(k+2))%L)*(k+3))%L)*(k+4))/120);}
    else if(freq==6){return (((((((((k)*(k+1)*(k+2))%L)*(k+3))%L)*(k+4)*(k+5))%L))/720);}
    else if(freq==7){return (((((((((k)*(k+1)*(k+2))%L)*(k+3))%L)*(k+4)*(k+5))%L)*(k+6))/5040);}
    else if(freq==8){return (((((((((((k)*(k+1)*(k+2))%L)*(k+3))%L)*(k+4)*(k+5))%L)*(k+6)*(k+7))%L))/40320);}
    else if(freq==9){return (((((((((((k)*(k+1)*(k+2))%L)*(k+3))%L)*(k+4)*(k+5))%L)*(k+6)*(k+7))%L)*(k+8))/362880);}
    else{return (((((((((((k)*(k+1)*(k+2))%L)*(k+3))%L)*(k+4)*(k+5))%L)*(k+6)*(k+7))%L)*(k+8)*(k+9))/3628800);}*/
}

int main(){
    int n,k;
    cin >> n>>k;
    long long int prod,store,answer=0;
    int i=2;
    int dup;
    for(int dupa=1;dupa<=n;dupa++){
    i=2;
    prod=1;
    dup=dupa;
    while(dup>1 && i<=dup){
        int fre=0;
        if(dup%i ==0){
            while(dup%i==0){
                dup /=i;
                fre++;
            }
            prod*= powered(k,fre);
            prod=(prod%L);
        }
        i++;
    }
    //cout << dupa<<" "<<prod<<endl;
    answer += prod;
    cout << dupa<<" "<<prod<<endl;
    //cout << prod<<" "<<dupa<<endl;
    answer = (answer%L);
    //cout << prod<<" " << dupa<<endl;
    }
    cout << (answer%L);
}