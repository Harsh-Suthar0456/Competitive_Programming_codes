#include<iostream>
using namespace std;

/*void deleter(string& input,int a){
    int n=input.length();
    for(int i=a;i<n-2;i++){
        input[i]=input[i+2];
    }
    //input[n-2]='\0';
}

int finder(string input,int length){
    int flag=0;
    for(int i=0;i<length-1;++i){
        if(input[i]!=input[i+1] && i<length-3 && input[i+2]==input[i+3]){flag=1;deleter(input,i+1);break;}
        else if(input[i]!=input[i+1]){flag=1;deleter(input,i);break;}
    }
    if(flag==1){return finder(input,length-2);}
    else {return length;}
}

int main(){
    int t;
    cin >> t;
    int answer[10000];
    for(int i=0;i<t;i++){
        int n;
        cin >> n;
        string input;
        cin >> input;
        answer[i]=finder(input,n);
    }
    for(int i=0;i<t;i++){
        cout << answer[i]<<endl;
    }
}
*/

int main(){
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        int n ;
        cin >> n;
        char* input=new char[n];
        int freq[26];for(int i=0;i<26;i++){freq[i]=0;}
        for(int i=0;i<n;i++){
            cin >> input[i];
            freq[(input[i])-97] += 1;
            //cout << i<<"="<<input[i]-97<<endl;
        }
        //cout << freq[21]<<endl;
        int maxfreq=0;
        for(int j=0;j<26;j++){
            maxfreq=max(maxfreq,freq[j]);
        }
        //cout << maxfreq<<endl;
        int answer;
        answer=max(2*maxfreq - n,n%2);
        cout << answer<<endl;
        //for(int i=0;i<n;i++){cout << input[i];}
        delete[] input;
    }
}