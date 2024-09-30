#include<iostream>
#include<algorithm>
using namespace std;
 
string bin(long n)
{
    string ans;
    long i;
    ans+='0';
    for (i = 1 << 30; i > 0; i = i / 2)
    {
      if((n & i) != 0)
      {
        ans+='1';
      }
      else
      {
        ans+='0';
      }
    }
    return ans;
}

int main(){
    int n,input[200004];
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> input[i];
    }
    string val[200004];
    for(int i=0;i<n;i++){
        val[i]=bin(input[i]);
    }
    int attendence[32];for(int i=0;i<32;i++) attendence[i]=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<32;j++){
            if(val[i][j]=='1'){attendence[j]+=1;}
        }
    }
    int give[200004];for(int i=0;i<n;i++) give[i]=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<32;j++){
            int r=31-j;
            if(val[i][j]=='1' && attendence[j]==1){give[i]+=pow(2,r);}
        }
    }
    int index=0,maxtillnow=-1;
    for(int i=0;i<n;i++){
        maxtillnow=max(maxtillnow,give[i]);
        if(maxtillnow==give[i]){index=i;}
    }
    //cout << maxtillnow<<" "<<index<<endl;
    //for(int i=0;i<n;i++){cout << val[i]<<" ";}
    //cout << endl;
    //for(int i=0;i<32;i++){cout << attendence[i]<< " ";}
    //cout << endl;
    swap(input[0],input[index]);
    for(int i=0;i<n;i++){
        cout << input[i]<<" ";
    }
}