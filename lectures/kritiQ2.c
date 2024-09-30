#include<stdio.h>

int find_single_element(int arr[],int n){
    for(int i=0;i<n;i++){
        int count =0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){count+=1;}
            
        }
        // if a number occurs twice, count will be 2,arr[i]==arr[i] and 
        //arr[j]==arr[i]
        if (count!=2){printf("%d", arr[i]);} 
                                     
    }
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];

    //loop 1 to take all the inputs from user
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("%d", find_single_element(arr, n));
}