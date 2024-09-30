#include<iostream>
#include<algorithm>
using namespace std;
bool ps(int n){
    int root=pow(n,0.5);
    if(root*root == n) return 1;
    else return 0;
}
int main(){
    cout << ps(10)<<ps(4);

}