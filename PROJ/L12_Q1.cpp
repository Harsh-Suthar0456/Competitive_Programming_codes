#include<iostream>
using namespace std;
int main(){
int n;
cin >> n;

int num=n;
int digit[5]={0,0,0,0,0};
int length=0;

for(int i=0;num>0;i++){
digit[i]=num%10;
num=num/10;
length++;
}

switch(digit[3]){
case 0: break;
case 1: cout<< "one";break;
case 2: cout<< "two";break;
case 3: cout<< "three";break;
case 4: cout<< "four";break;
case 5: cout<< "five";break;
case 6: cout<< "six";break;
case 7: cout<< "seven";break;
case 8: cout<< "eight";break;
case 9: cout<< "nine";break;
}
if(digit[3]!=0){cout << " thousand ";}

switch(digit[2]){
case 0: break;
case 1: cout<< "one";break;
case 2: cout<< "two";break;
case 3: cout<< "three";break;
case 4: cout<< "four";break;
case 5: cout<< "five";break;
case 6: cout<< "six";break;
case 7: cout<< "seven";break;
case 8: cout<< "eight";break;
case 9: cout<< "nine";break;
}
if(digit[2]!=0){cout << " hundred ";}
if(digit[1]!=0){cout<< "and ";}
switch(digit[1]){
case 0: break;
case 1: break;
case 2: cout<< "twenty";break;
case 3: cout<< "thirty";break;
case 4: cout<< "fourty";break;
case 5: cout<< "fifety";break;
case 6: cout<< "sixty";break;
case 7: cout<< "seventy";break;
case 8: cout<< "eightty";break;
case 9: cout<< "ninety";break;

}

if(digit[1]==1){switch(digit[0]){
case 0: cout << "ten";break;
case 1: cout<<"eleven";break;
case 2: cout<< "twelve";break;
case 3: cout<< "thirteen";break;
case 4: cout<< "fourteen";break;
case 5: cout<< "fifeteen";break;
case 6: cout<< "sixteen";break;
case 7: cout<< "seventeen";break;
case 8: cout<< "eighteen";break;
case 9: cout<< "nineteen";break;

} return 0;}
switch(digit[0]){
case 0: break;
case 1: cout<< " one";break;
case 2: cout<< " two";break;
case 3: cout<< " three";break;
case 4: cout<< " four";break;
case 5: cout<< " five";break;
case 6: cout<< " six";break;
case 7: cout<< " seven";break;
case 8: cout<< " eight";break;
case 9: cout<< " nine";break;
}
}