#include<iostream>
#include<fstream>
using namespace std;

struct currency{string name;double rate;};

int main(){
    int n,q;
    string ok;
    cin >> ok;
    currency data[100];
    ifstream curr(ok);
    curr >> n>>q;
    for(int i=0;i<n;i++){
        curr>> data[i].name>>data[i].rate;
    }
    double ans[2000],value;string c1,c2;
    for(int i=0;i<q;i++){
        curr >> value>>c1>>c2;
       
        for(int j=0;j<n;j++){if(c1==data[j].name){value*=(data[j].rate);break;}}
        for(int j=0;j<n;j++){if(c2==data[j].name){value/=(data[j].rate);break;}}
        ans[i]=value;

    }
    for(int i=0;i<q;i++){
        cout << ans[i]<<endl;
    }

}