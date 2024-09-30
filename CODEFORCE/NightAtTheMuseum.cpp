#include <iostream>
using namespace std;
int main(){
    string n;
cin >> n;
string name="a"+ n;
int leng= name.length();
int count=0;
for(int i=1;i<leng;i++){
if(abs(name[i]-name[i-1])<=13){
    count += abs(name[i]-name[i-1]);
} else{count += 26-abs(name[i]-name[i-1]);}
}
cout<< count;
}