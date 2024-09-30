#include<bits/stdc++.h>
#include<string>
int test;
using namespace std;

struct holder{
    int hori;
    int verti;
    int operator-(holder const& b){
        return abs(hori-b.hori)+abs(verti-b.verti);
    }
};

struct hol{
    string val;
    int answer;
};
bool compare(hol a,hol b){
    if(a.answer != b.answer){
        return a.answer < b.answer;
    }
    else{
        if(a.val.compare(b.val)>0){
            return 0;
        }
        else{return 1;}
    }
}
holder alpha[26];
char r1[11]={'q','w','e','r','t','y','u','i','o','p'};
char r2[11]={'a','s','d','f','g','h','j','k','l'};
char r3[11]={'z','x','c','v','b','n','m'};
int main(){
    cin >> test;
    for(int i=0;i<10;i++){
        alpha[r1[i]-'a'].verti=1;
        alpha[r1[i]-'a'].hori=i;
        if(i<9){
        alpha[r2[i]-'a'].verti=2;
        alpha[r2[i]-'a'].hori=i;}
        if(i<7){
        alpha[r3[i]-'a'].verti=3;
        alpha[r3[i]-'a'].hori=i;}
    }
    while(test--){
        string input;
        cin >> input;
        int l;cin >> l;
        hol word[l];
        for(int i=0;i<l;i++){
            cin >> word[i].val;
        }
        for(int i=0;i<l;i++){word[i].answer=0;}
        for(int i=0;i<l;i++){
            for(int j=0;j<input.length();j++){
                word[i].answer+= alpha[word[i].val[j]-'a']-alpha[input[j]-'a'];
            }
        }
        sort(word,word+l,compare);
        for(int i=0;i<l;i++){
            cout << word[i].val<<" "<<word[i].answer<<endl;
        }
    }
}