#include<iostream>
#include<algorithm>
using namespace std;

struct holder{
    int data;
    int index;
};

bool compare(holder a,holder b){
    return a.data<b.data;
}

int main(){
    int t,n;
    holder a[100003],b[100003];
    cin  >> t;
    for(int tnum=0;tnum<t;tnum++){
        cin >> n;
        long long int answer=0;
        for(int i=0;i<n;i++){
            cin >> a[i].data >> b[i].data;
            a[i].index=i;b[i].index=i;
        }
        sort(a,a+n,compare);
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(b[a[j].index].data < b[a[i].index].data){answer++;}
            }
        }
        cout << answer<<endl;
    }
}