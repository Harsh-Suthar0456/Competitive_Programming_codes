#include<iostream>
using namespace std;

int bintodec(int n) 
{  
    int decimal = 0; 
    int base = 1; 
  
    while (n>0) { 
        int last_digit = n % 10; 
        n = n / 10; 
        decimal += last_digit * base; 
        base = base * 2; 
    } 
  
    return decimal; 
}

void dectobin(int n) 
{   
    int binary[60]; 
    int i = 0; 
    while (n > 0) { 
        binary[i] = n % 2; 
        n = n / 2; 
        i++; 
    } 

    for (int j = i - 1; j >= 0; j--) 
        cout << binary[j]; 
}

int main(){
    int bin1,bin2;
    cin >> bin1>>bin2;
    int dec1,dec2;
    dec1= bintodec(bin1);
    dec2= bintodec(bin2);
    int answer=dec1+dec2;
    dectobin(answer);
    
}