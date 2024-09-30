#include<iostream>
#include<fstream>
using namespace std;

int wordcheck(string word,string stopword){
    if(word==stopword){return 1;}
    return 0;
}

void printer(ifstream& input){
    string word;
    while(input >> word){
        int leng=word.length();
        int flag =0;
        string stopper[20]={"a","an","all", "and", "are", "each", "he", "has", "had", "have", "in", "is", "it", "its", "of", "the", "there", "was", "were", "who"};
        for(int i=0;i<20;i++){
            if(wordcheck(word,stopper[i])==1){flag=1;}
        }
        if(flag==0){
            if(word[leng-1]=='.'){word[leng-1]='\0';}
            cout << word<<" ";}
    }
}

int main(){
    string filename;
    cin >> filename;
    ifstream inputf(filename);
    //cout << wordcheck("hello","hello");
    printer(inputf);


}