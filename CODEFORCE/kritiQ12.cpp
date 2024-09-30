#include<iostream>
using namespace std;

struct student{
    string name;
    int height;
};

void swap1(int &a,int &b){
    int temp;
    temp=a;
    a=b;
    b=temp;
}
void swap2(string &a,string &b){
    string temp;
    temp=a;
    a=b;
    b=temp;
}

int main(){
    student child[1000];
    int n;
    cin >> n;
    for(int i=1;i<=n;i++){
        cin>>child[i].name;
        cin>> child[i].height;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<n;j++){
            if(child[j].height>child[j+1].height){
                swap2(child[j].name,child[j+1].name);
                swap1(child[j].height,child[j+1].height);
            }
        }
    }
    for(int i=1;i<=n;i++){
        cout<<child[i].name<<endl;
    }
}