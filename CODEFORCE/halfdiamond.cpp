#include<iostream>
using namespace std;
void s(int space, int n){
    for(int i=1;i<=space;i++){cout << " ";} //initial spoace
    for(int times=1;times<=space+n;times++){
    if(n%2==0){for(int i=1;i<=n/2;i++){cout<<i<<" ";} for(int i=n/2;i>0;i--){cout<<i<<" ";}}
    if(n%2==1){for(int i=1;i<=(n+1)/2;i++){cout << i<<" ";} for(int i=(n-1)/2;i>0;i--){cout<<i<<" ";}}
    for(int i=1;i<=2*space+1;i++){cout<<" ";}//intermediate space
    }
}
/*string c(int n){
    if(n%2==1){for(int i=1;i<=(n+1)/2;i++){cout << i;} for(int i=(n-1)/2;i>0;i--){cout<<i;}}
    if(n%2==0){for(int i=1;i<=n/2;i++){cout<<i;} for(int i=n/2;i>0;i--){cout<<i;}}
}*/


int main(){
    int repeat,height;
    cin >> height>>repeat;
    if(repeat<=0){repeat=height;}

    for(int row=1-height;row<height;row++){
        int row1=height-abs(row);
        int space=height-row1;
        int length=row1;
        s(space, length);
        cout<<endl;

    }


}