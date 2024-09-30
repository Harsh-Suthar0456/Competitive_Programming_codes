#include<iostream>
using namespace std;

int maxind(long int* arr,int n){
    int max=-1,index=0;
    for(int i=0;i<n;i++){
        if(max<arr[i]){index=i;max=arr[i];}
    }
    return index;
}

int main(){
    int n;
    long int answer=0;
    cin >> n;
    long int checker[200000],input[200000];

    for(int i=0;i<n;i++){
        checker[n]=0;
    }

    for(int i=0;i<n;i++){
        cin >> input[i];
    }
    bool flag =1;
    while(flag && input[maxind(input,n)]-1>0){
        flag=0;
        int i=maxind(input,n),j;
        if(i==0){j=n;}
        else{j=i;}
    if((input[(i+1)%n]==0 && input[(j-1)%n]>0) || (input[(j-1)%n]<=input[(i+1)%n] && input[(j-1)%n]>0)){
        //if(input[(i-1)%n]==0){break;}
        long int temp=(input[i])/2;
        //min(((input[i])/2),input[(j-1)%n])
        answer+=1;
        input[i] -= 2;
        input[(j-1)%n] -= 1;
        checker[i]=1;checker[(j-1)%n]=1;
        flag=1;
        //cout<<answer<<"tomato"<<endl;
    }
    else if((input[(j-1)%n]==0 && input[(i+1)%n]>0) || (input[(i+1)%n]<=input[(j-1)%n] && input[(i+1)%n]>0)){
        if(input[(i+1)%n]==0){break;}
        long int temp=(input[i])/2;
        //min(((input[i])/2),input[(i+1)%n])
        answer+=1;
        input[i] -= 2;
        input[(i+1)%n] -=1;
        checker[i]=1;checker[(i+1)%n]=1;
        flag=1;
        //cout<<answer<<input[0]<<input[1]<<input[2]<<endl;
        //cout << 2;
        continue;
        }
    }
    for(int i=0;i<n;i++){
        if(checker[i]==0){
            int j;
            if(i==0){j=n;}
            else{j=i;}
            if(input[(j-1)%n]!=0 && input[(i+1)%n]!=0){
                answer+=1;
                checker[i]=1;checker[(j-1)%n]=1;checker[(i+1)%n]=1;
                input[i]--;input[(i+1)%n]--;input[(j-1)%n]--;
            }
        }
    }
    cout<<answer;
}