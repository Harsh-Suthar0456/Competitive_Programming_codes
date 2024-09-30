#include<iostream>
#include<ctime>
using namespace std;

void swap(int& a,int& b){
    int temp=a;
    a=b;
    b=temp;
}

void sort(int arr[], int n)
{
    int i, j, minIndex;
    for (i = 0; i < n - 1; i++) {
        minIndex = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }
        if (minIndex != i)
            swap(arr[minIndex], arr[i]);
    }
}

int main(){
    int n;
    cin >> n;
    int arr[100],freq[100];
    for(int i=0;i<n;i++){
        freq[i]=1;
        cin >> arr[i];
        for(int j=0;j<i;j++){
            if(arr[i]==arr[j]){freq[i]=freq[j];freq[j]++;freq[i]++;}
        }
    }

    int freq2[100];
    int j=0,checked=0;

    while(checked <n){
        int flag=0;
    for(int i=0;i<checked;i++){ 
        if(freq[checked]==freq[i] && arr[checked]==arr[i]){flag=1;break;}
    }

    if(flag==1){checked++;continue;}
    freq2[j]=freq[checked];
        checked++;
        j++;
    }

sort(freq2,j);

    int reqIndex;
    if(j%2 ==1){reqIndex=freq2[(j-1)/2];}
    else{reqIndex=freq2[(j-2)/2];}

    int answer=100000;

    for(int i=0;i<n;i++){
        if(freq[i]==reqIndex){
            answer=(answer<arr[i])?answer:arr[i];
        }
    }
    cout << answer;
}