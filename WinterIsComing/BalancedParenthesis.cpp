#include<iostream>
#include<stack>

using namespace std;

void checker(string input){
    stack<char> brackets;
    //brackets.push('a');
    for(int i=0;i<input.length();i++){
        //cout << input[i];
        if(input[i]=='(' || input[i]=='{' || input[i]=='['){brackets.push(input[i]);}
        //cout<<brackets.top();
        //if(input[i]==')' || input[i]==']' || input[i]=='}'){
            //if(brackets.empty()==1){cout << "imbalanced parentheses";return;}
            //if((input[i]-brackets.top())==1 || (input[i]-brackets.top())==2) {brackets.pop();return;}
            //else{cout << "imbalanced parentheses";return;}}
        if(input[i]==')'){
            if(brackets.empty()){cout << "IMBALANCED";return;}
            if(brackets.top()=='('){brackets.pop();continue;}
            else{cout<<"IMBALANCED";return;}
        }
        if(input[i]=='}'){
            if(brackets.empty()){cout << "IMBALANCED";return;}
            if(brackets.top()=='{'){brackets.pop();continue;}
            else{cout<<"IMBALANCED";return;}
        }
        if(input[i]==']'){
            if(brackets.empty()){cout << "IMBALANCED";return;}
            if(brackets.top()=='['){brackets.pop();continue;}
            else{cout<<"IMBALANCED";return;}
        }
        }
        
    if(brackets.empty()==1){cout << "BALANCED";return;}
    else{cout << "imbalnced parentheses";return;}
}

int main(){
    string input;
    cin >> input;
    checker(input);
}