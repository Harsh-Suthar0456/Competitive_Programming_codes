#include<iostream>
#include<string>
using namespace std;

int main(){
  string k="hello world world";
  int i= k.find("lds ");
  cout << i<<endl;
  int j = (k.find("ld",16)+1);
  cout << j<<endl;
  cout << string:: npos;
}