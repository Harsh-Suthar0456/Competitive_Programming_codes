#include <stdio.h>
#include <math.h>

void isArmstrong(int n){
    int sum=0, digit;
    int num = n;
    while(num>0){
        digit=num%10;
        sum += pow(digit,3);
        num /=10;
    }
    if(sum==n){
        printf("%d\n", n);
    }
}

int main(){
    int n;
    printf("enter n: ");
    scanf("%d", &n);
    for(int i=0;i<=n;i++){
        isArmstrong(i);
    }
    return 0;
}