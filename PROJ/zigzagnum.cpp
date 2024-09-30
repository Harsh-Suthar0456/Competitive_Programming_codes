#include<iostream>
using namespace std;

/*void digit(int a[],int n, int length){
for(int i=0;i<length;i++){
    a[i]=n%10;
    n=n/10;
}
}

void zigzag(int a[], int n,int length){
    for(int i=0;i<length;i++){
        if(i==length-1){if(a[i]>=a[i-1]){return;}}
        else if(i%2==1){ if(a[i]>=a[i-1] || a[i]>=a[i+1]){return;}}
        else if(i==0){if(a[i]<=a[i+1]){return;}}
        else if(i%2==0){if(a[i]<=a[i-1] || a[i]<=a[i+1]){return;}}
    }
    cout << n<<endl;
}

int main(){
    int k;
    cin >> k;
    int arr[k];
    for(int i=pow(10,k-1);i<pow(10,k);i++){
        digit(arr,i,k);
        zigzag(arr,i,k);
        
        

    }
}*/


/*int main(){        // 4527
int k;
cin >> k;
for(int i=pow(10,k-1);i<pow(10,k);i++){
    int a,b,alter=1,flag=1;
    a=i%10; b=((i%100)-a)/10; int c=i/100;
    for(int j=1;j<k;j++){
        if(alter==1){if(a<=b){flag=0; break;}}
        if(alter==-1){if(b<=a){flag=0; break;}}
        a=b;
        b=c%10;
        c=c/10;
        alter *=-1;

    }
    if(flag==1){cout << i<<endl;}

}
}
void digit(int a[],int n, int length){
for(int i=0;i<length;i++){
    a[i]=n%10;
    n=n/10;
}}*/

int recurse(int i,int length){
    
}

int main(){
    int k;
    cin >>k;
    int arr[k];
    for(int i=pow(10,k-1),i<pow(10,k);i++){

    }
}
