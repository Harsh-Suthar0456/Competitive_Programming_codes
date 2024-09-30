#include<iostream>
using namespace std;

void rightshift(int start,int arr[],int shift){
    for(int i=shift;i>0;i--){
        arr[start+i]=arr[start+i-1];
    }
}

void leftshift(int begin,int arr[],int shift){
    for(int i=1;i<shift;i++){
        arr[begin+i-2]=arr[begin+i-1];
    }
}

int main(){
    int t;
    cin >> t;
    int answer[150];for(int k=0;k<t;k++){answer[k]=0;}
    for(int i=0;i<t;i++){
        int n;
        cin >> n;
        int arr[150];
        int line[210];
        int begin=100;
        int size=0;


        for(int j=1;j<=n;j++){
            cin >> arr[j];
            if(arr[j]==0){line[begin-1]=j;begin--;size++;}
            for(int pos=1;pos<=size;pos++){
                if(line[begin+pos-1]!=arr[j]){continue;}
                int shift=min(pos,size-pos);
                answer[i]+=shift;
                
                if(shift==size-pos){rightshift(begin+pos,line,shift);line[begin+pos]=j;}
                else{leftshift(begin,line,shift);line[begin+shift-2]=j;begin--;}
                cout << line[begin]<<"potato"<<endl;
                size++;
                break;
            }
        }
    cout << size<<endl;}
    
    for(int i=0;i<t;i++){
        cout << answer[i]<<endl;
    }
}