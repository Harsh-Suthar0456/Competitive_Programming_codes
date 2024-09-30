#include<stdio.h>
#include<stdlib.h>

int main(){
    int n,k,sum=0;
    scanf("%d %d", &n, &k);
    int* arrptr = (int*)malloc(n * sizeof(int));
    for(int i=0;i<n;i++){
        scanf("%d", arrptr+i);
        if( *(arrptr+i) > k){
            sum += *(arrptr+i);
        }
    }
    printf("%d", sum);
    free(arrptr);
    return 0;
}