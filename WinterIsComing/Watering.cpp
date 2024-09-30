#include<iostream>
using namespace std;
int main(){
    int t,n,k,d;
    cin >> t;
    for(int tnum=0;tnum<t;tnum++){
        int input[2001],v[100001];
        int score=0,till=0;
        cin >> n>>k>>d;
        for(int i=1;i<=n;i++){
            cin >>input[i];
            input[i]-=i;
        }
        for(int i=0;i<k;i++){
            cin >> v[i];
        }
        /*for(int i=0;i<n;i++){if(input[i]==0){score++;}}
        till=max(score,till);
            score=0;*/
            int answer=0;
        for(int dnum=1;dnum<=d && dnum<=2*n;dnum++){
            for(int i=1;i<=n;i++){if(input[i]==0){score++;}}
            for(int i=1;i<=v[(dnum-1)%(k)];i++){
                
                input[i]++;
            }
            
            answer=max(score+((d-dnum)/2),answer);
            score=0;
        }
        
        
        cout <<max(answer,(d-1)/2)<<endl;
    }
}