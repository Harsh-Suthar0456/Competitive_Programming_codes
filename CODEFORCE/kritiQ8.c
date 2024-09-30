#include<stdio.h>
/*int f(int x){
    return x? 1+f(x-1):0;
}
int g(int x){
    return x<5 && x%2 ? x+f(x) : 2-g(x-1);
}

 int main(){
    printf("%d",g(8));
    return 0;
 }*/
 int main(){
    int nums[8]={8,21,1,4,12,5,6,3};
    int* add[8];

    for(int i=0;i<8;i++){add[i] = nums+i;}
    for(int i=0;i<8;i++){nums[i]=**(add+i);}
    printf("%d",nums[3]);
 }