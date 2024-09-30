#include<iostream>
using namespace std;
int main(){
    double marks[200];
    cout << "enter marks of the student: "<<endl;
    double total=0;
    int loops=0;
    for(int i=1;marks[i-1]>=0;i++){
        cin >> marks[i];
        if(marks[i]<0) break;
        total +=marks[i];
        loops++;
    }
    double avg;
    avg=(total)/(loops);
    cout << avg;
}