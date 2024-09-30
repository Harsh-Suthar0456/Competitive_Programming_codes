#include<iostream>
using namespace std;
int main(){
    char row[3][3];
    int t,rnum,cnum;
    cin >> t;
    for(int testnum=0;testnum<t;testnum++){
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cin >> row[i][j];
                if(row[i][j]=='?'){rnum=i;cnum=j;}
            }
        }
        char answer;
        answer= 261-row[rnum][0]-row[rnum][1]-row[rnum][2];
        cout << answer<<endl;
    }
}