#include<iostream>
using namespace std;

int digitsum(int n){
    int sum=0;
    while(n>0){
        sum +=n%10;
        n=n/10;
    }
    return sum;
}
int check(int a, int b, int c) {
    if (a == b && b == c) {
        return 1;
    } else if (a == b || b == c || a == c) {
        return 3;
    } else {
        return 6;
    }
}
int main(){
    int t;
    cin >> t;
    long long int answer;
    for(int i=0;i<t;i++){
        answer=0;
        int n;
        cin >> n;
        long int num1,num2=0,num3=0;
        for(num1=n/3;num1<=n ;num1++){
            if(digitsum(num1)<=digitsum(n)){
            for(num2=0;num2<=num1 && num1+num2<=n ;num2++){
                if(digitsum(num1)+digitsum(num2)<=digitsum(n)){
                for(num3=0;num3<=num2 && num1+num2+num3<=n ;num3++){
                    if(digitsum(num1)+digitsum(num2)+digitsum(num3) == digitsum(n) && num1+num2+num3 == n){
                        answer+=check(num1,num2,num3);
                    //cout << num1<<" "<<num2<<" "<<num3<<endl;
                    }
                }
                }
            }
            }
        }
    cout << answer<<endl;
    }
}    