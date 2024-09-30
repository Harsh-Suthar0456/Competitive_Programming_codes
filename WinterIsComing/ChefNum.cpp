#include<iostream>
using namespace std;

int main(){
    int t;
    cin >>t;
    for(int i=0;i<t;i++){
        int n;double checker=0,sumk2=0;
        cin >>n;
        double* k=new double[n];
        double* c=new double[n];
        for(int i=0;i<n;i++){
            cin >> (k)[i];
            sumk2+=(k[i])*(k[i]);
        }
        for(int i=0;i<n;i++){
            cin >> (c)[i];
        }
        for(int i=0;i<n;i++){
            checker += ((k)[i])*((c)[i]);
        }
        if(checker <0){cout << -1;delete[] k;delete[] c;continue;}
        double batwara=0;
        for(int i=0;i<n;i++){
            batwara += pow((k[i])*(checker/sumk2),0.5);
        }
        cout << batwara<<endl;
        delete[] k;delete[] c;
    }
}