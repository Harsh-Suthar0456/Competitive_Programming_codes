#include <iostream>
using namespace std;
int div(int n){
    int remainder,d=0;
    while(n>1){
        d +=n%2;
        n = (n-(n%2))/2;
    }
    if(d==0){return 1;} else{return 0;}
}
/*long double tricky(long double num){
    long double sum=num*(num+1)/2;
    for(int i=0;power(2,i)<=num;i++){
        sum -= power(2, i+1);
    }
    return sum;
    }*/
int main(){
    int t,a[1000];
    cin >> t;
    for(int i=1;i<=t;i++){
        cin >> a[i];
        
    }

    for(int j=1;j<=t;j++){
        long double sum=0;
        for(int i=1;i<=a[j];i++){
            if(div(i)==1){
                sum -= i;
            } else{sum +=i;}
        }
    cout << sum<<endl;}
    }
