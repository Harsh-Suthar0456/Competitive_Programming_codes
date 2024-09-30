#include<iostream>
#include<algorithm>
using namespace std;

    long double factorial(int n)
{
      if(n==0)
      return 1;
     long double value = 1;
    for (int i = 2; i <= n; i++)
        value = value * i;
    return value;
}

int gcd(int a, int b) 
{ 
    // Find Minimum of a and b 
    int result = min(a, b); 
    while (result > 0) { 
        if (a % result == 0 && b % result == 0) { 
            break; 
        } 
        result--; 
    } 
  
    // Return gcd of a and b 
    return result; 
}

/*long long int nCr(int n, int r)
{
    return factorial(n) / (factorial(r) * factorial(n - r));
}*/
long long int nCr(int n,int r){

    long long p = 1, k = 1;

    if (n - r < r)
        r = n - r;
 
    if (r != 0) {
        while (r) {
            p *= n;
            k *= r;
 
            // gcd of p, k
            long long m = gcd(p, k);
 
            // dividing by gcd, to simplify
            // product division by their gcd 
            // saves from the overflow
            p /= m;
            k /= m;
 
            n--;
            r--;
        }
 
        
    }
 
    else
        p = 1;
 
   
    return p;
}

long long int casecounter(int sum,int box){
    if(sum >9*box){return 0;}
    long long int value=0;
    for(int r=0;r<=(sum/10);r++){
        int kk= //pow(-1,r)*
        (nCr(29,(27)));
        value += pow(-1,r)*(nCr(sum-10*(r)+box-1,(sum-10*(r))))*(nCr(box,r));
        //cout<<kk<<endl;
        //cout <<value<<endl;
    }
    return (value>0)?value:0;
}

long long int valuefinder(int n,int k){
    long long int answer=0;
    int box=n/k;
    for(int l=0;l<=200;l++){
        answer += pow(casecounter(l,box),k);
        //cout << answer<<endl;
    }
    return answer;
}

int main(){
    int n,k;
    //cin >> n>>k;
    //cout << valuefinder(n,k);
    cout << valuefinder(18,3);

}