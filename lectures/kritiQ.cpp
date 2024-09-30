#include<iostream>
using namespace std;

void isArmstrong(int n){
    int sum=0, digit;
    int num = n;
    while(num>0){
        digit=num%10;
        sum += pow(digit,3);
        num /=10;
    }
    if(sum==n){cout<<n<<endl;}
}

int main(){
    int n;
    cout<<"enter n: ";
    cin >> n;
    for(int i=1;i<=n;i++){
        isArmstrong(i);
    }
return 0;
}