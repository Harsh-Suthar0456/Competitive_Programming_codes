#include<iostream>
using namespace std;
int main(){
    float n, x, a, value=0;
    cout << "give the value of n: ";
    cin >> n;
    cout << "give the value of x: ";
    cin >> x;
    cout << "give the value of coefficients of polynomial by typing them with a space between them, starting from a0: "<<endl;
    
    for(int i=0;i<=n;i++){
    cin >> a;
    value += a*pow(x, i);
    }
    cout << value;
    return 0;
}