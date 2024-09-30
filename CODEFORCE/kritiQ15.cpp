#include<iostream>
using namespace std;

struct student{
    string name;
    float chemmarks;
    float phymarks;
    float mathmarks;
    float avg(){
        return (chemmarks+phymarks+mathmarks)/3.0;
    }
};

int main(){
    student stu[100];
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> (stu[i]).name;
        cin >> (stu[i]).chemmarks>>(stu[i]).phymarks>>(stu[i]).mathmarks;
    }
    for(int i=0;i<n;i++){
        cout << (stu[i]).name <<" "<< (stu[i]).avg()<<endl;
    }
}