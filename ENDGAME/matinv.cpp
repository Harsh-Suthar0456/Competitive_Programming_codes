#include<iostream>
using namespace std;

void rowchanger(double arr[][100],int n,int a,int b){
    int temp;
    for(int i=1;i<=n;i++){
        temp=arr[a][i];arr[a][i]=arr[b][i];arr[b][i]=temp;
    }
}

int setter(double arr[][100],double ident[][100],int n,int currCol){
    if(arr[currCol][currCol]!=0){return 1;}
    for(int i=currCol;i<=n;i++){
        rowchanger(arr,n,currCol,i);
        rowchanger(ident,n,currCol,i);
    if(arr[currCol][currCol]!=0){return 1;}
}
return 0;
}

void zeromaker(double arr[][100],double ident[][100],int n,int currRow){
    for (int i=1;i<=n;i++){
        if(i==currRow){continue;}
        double factor=arr[i][currRow];
        for(int j=1;j<=n;j++){
            ident[i][j] -= factor*ident[currRow][j];
            arr[i][j] -= factor*arr[currRow][j];
            
        }
        //arr[i][currRow]=0;
        //ident[i][currRow] -=ident[currRow][currRow]*arr[i][currRow];
    }
}

int main(){
    double a[100][100],ident[100][100];
    int n;
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin >> a[i][j];
            if(i==j){ident[i][i]=1;}
            else ident[i][j]=0;
        }
    }

    for(int i=1;i<=n;i++){
        setter(a,ident,n,i);
        double factor = a[i][i];
        if(setter(a,ident,n,i)==0){cout << "meth error";return 0;}
        for(int j=1;j<=n;j++){

            a[i][j] /= factor;
            ident[i][j] /= factor;
        }
       
        zeromaker(a,ident,n,i);
    }
    for(int i=1;i<=n;i++){//printing a(identity)
        for(int j=1;j<=n;j++){
            cout << a[i][j]<<" ";
        }
        cout << endl;
    }
    for(int i=1;i<=n;i++){//printing inverse
        for(int j=1;j<=n;j++){
            cout << ident[i][j]<<" ";
        }
        cout << endl;
    }
}