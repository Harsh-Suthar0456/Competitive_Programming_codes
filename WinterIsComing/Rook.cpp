#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    char c[8]={'a','b','c','d','e','f','g','h'};
    char r[8]={'1','2','3','4','5','6','7','8'};
    char answerc[65][8];
    char answerr[65][8];
    char column[100],row[100];
    for(int i=0;i<t;i++){
        cin >> column[i] >> row[i];
        int colstore=0;
        int rowstore=0;
        for(int colnum=0;colnum<8;colnum++){
            if(c[colnum]!=column[i]){answerc[i][colstore]=c[colnum];colstore++;}
        }
        for(int rownum=0;rownum<8;rownum++){
            if(r[rownum]!=row[i]){answerr[i][rowstore] = r[rownum];rowstore++;}
        }
        }
        for(int i=0;i<t;i++){
            for(int j=0;j<7;j++){
                cout << column[i]<<answerr[i][j]<<endl;
                cout << answerc[i][j]<<row[i]<<endl;
            }
        }
}