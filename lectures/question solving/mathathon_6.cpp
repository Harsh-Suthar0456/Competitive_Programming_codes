#include <iostream>
using namespace std;
float factorial(double r)
{
    double inter;
    inter = 1;
    
    while(r>1){
        inter = inter * r;
        r=r-1;
    } 
    return inter;
}
//float geoSeries(float r,){
  //  while()
int main(){
    double k;
    int n;
    double t, mid, s[100];
    mid=0.0; 
    k=1.0;
    n=1; //initial values
    int i;
    i=0;
    while(i <=50){
        s[i]=0;
        i=i+1;
    }



  while(n<=50){
   while(n >= k){
    t = (pow(k, n-k))/(factorial(n-k)*factorial(k));
    mid += t; k++;
   }
   s[n] = mid;
   mid=0.0; k=1.0; // resetting k,mid after each summation completion
   n=n+1;
  }
   cout << s[50] <<endl;
   double totalSum;
   totalSum = 0;
   i=1;
   while(i<=25){
    totalSum = totalSum + s[i];
    i=i+1;
   } //second summation loop
   cout << totalSum;
   return 0;

}
//float ki jagah double use karne pe shi answer aa rha hai, weird but works
//har jagah .0 end me lagane pe answer aara shi, wierd but works
//array m esirf integer daal sakte hai
// abse float ki jaga double hi use karna hai
