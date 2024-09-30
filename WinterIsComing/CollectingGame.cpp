#include<iostream>
#include<algorithm>
using namespace std;

struct holder{
    int data;
    int index;
};

bool compar(const holder& a,const holder& b){
    return (a.data<b.data);
}

int main(){
    int t,n;
    cin >> t;
    for(int tnum=0;tnum<t;tnum++){
        cin >> n;
        long long int sum=0;
        holder* input=new holder[n];
        int* answer=new int[n];
        for(int i=0;i<n;i++){
            cin >> input[i].data;
            input[i].index=i;
            sum+=input[i].data;
        }
        sort(input,input+n,compar);
        for(int l=n-1;l>=0;l--){
            answer[input[l].index]=l;
            if(l<n-1){
                if(sum>=input[l+1].data){
                    answer[input[l].index]=answer[input[l+1].index];
                }
            }
            sum-=input[l].data;
        }
        for(int k=0;k<n;k++){
            cout << answer[k]<< " ";
        }
    }
}