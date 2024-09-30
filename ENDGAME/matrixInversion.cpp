#include<iostream>
using namespace std;

void rowchange(double arr[][100],int n,int a,int b){
    double temp;
    for(int i=1;i<=n+1;i++){
        temp=arr[a][i];
        arr[a][i]=arr[b][i];
        arr[b][i]=temp;
    }
}

void zeromaker(double arr[][100],int n,int currRow){
    for(int i=0;i<=n;i++){  
        if(i==currRow){continue;}      
        for(int j=0;j<=n+1;j++){
            if(j==currRow){continue;}
            arr[i][j]-=(arr[currRow][j])*(arr[i][currRow]);
        }
        arr[i][currRow]=0;
    }
}

int setter(double arr[][100],int n,int currCol){
    for(int i=currCol;i<=n;i++){
    if(arr[currCol][currCol]!=0){return 1;}
    if(arr[currCol][currCol]==0){
        rowchange(arr,n,currCol,i);
        if(arr[currCol][currCol]!=0){return 1;}
        }
    }
    return 0;
}

int main(){
    double a[100][100]; //={{0,0,0,0},
                    // {0,1,2,3},
                    // {0,4,8,6},
                    // {0,2,6,4}};
    int n;
    cout << "enter the number of variables: ";
    cin >> n;
    cout << "enter the coeff and constant value in an order(n+1 inputs): "<<endl;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n+1;j++){
            cin >> a[i][j];
        }
    }    
    for(int i=1;i<=n;i++){
        setter(a,n,i);
        if(setter(a,n,i)==0){cout << "methematical error";return 0;}
        for(int j=i+1;j<=n+1;j++){a[i][j]/=a[i][i];}
        a[i][i]=1;
        zeromaker(a,n,i);
    }
    for(int i=1;i<=n;i++){
        cout << "x"<<i<<" = "<<a[i][n+1]<<endl;
    }
}