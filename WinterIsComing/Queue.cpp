#include<iostream>
using namespace std;

int main(){
    int n,t;
    cin >> n>>t;
    int girlindex[100],girlflag[100],boyindex[100],boyflag[100],girlnum=0,boynum=0;
    string queue,ans;
    for(int i=0;i<n;i++){ans[i]='j';girlflag[i]=0;boyflag[i]=0;}
    cin >> queue;
    for(int i=0;i<n;i++){
        if(queue[i]=='G'){
            girlindex[girlnum]=i;
            if(i>0){
            if(queue[i-1]=='G'){girlflag[girlnum]=girlflag[girlnum-1]+1;}
            }
            girlnum++;
        }
    }
    for(int i=n-1;i>=0;i--){
        if(queue[i]=='B'){
            boyindex[boynum]=i;
            if(queue[i+1]=='B'){boyflag[boynum]=(boyflag[boynum-1])+1;}
            boynum++;
            }
    }
    for(int i=boynum-1;i>=0;i--){cout << boyflag[boynum]<<" ";}
    cout<<endl;

    for(int gind=0;gind<girlnum;gind++){
        if(t>girlflag[gind]){
        girlindex[gind]=max(gind,girlindex[gind]-t+girlflag[gind]);
        }
        ans[girlindex[gind]]='G';
    }
    for(int bind=0;bind<boynum;bind++){
        if(t>=boyflag[bind]){
        boyindex[bind]=min(n-1-bind,boyindex[bind]+t-boyflag[bind]);
        }
        ans[boyindex[bind]]='B';
    }
    //cout << boyflag[2];
    for(int i=0;i<n;i++){
        cout << ans[i];
    } 
}