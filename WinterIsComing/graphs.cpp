#include<iostream>
#include<algorithm>
using namespace std;

int flag=0;int attendence[100002];

void check(int edgenum,vector<int> data[]){
    if(flag!=0) return;
    for(int i=0;i<data[edgenum].size();i++){
        if(attendence[data[edgenum][i]]!=-2){
            if(attendence[data[edgenum][i]] != -1*(attendence[edgenum])){flag+=1;return;}
        }
        else{
            attendence[data[edgenum][i]]= (-1)*attendence[edgenum];
            check(data[edgenum][i],data);   
        }
        if(flag!=0){return;}
    }
    return;
}

int main(){
    int n,m;
    cin >> n>>m;
    //int arr[n+1][n+1];
    vector<int> dat[n+1];
    for(int i=1;i<=n;i++){attendence[i]=-2;}
    int edge[m][2];
    for(int i=0;i<m;i++){
        cin >> edge[i][0]>>edge[i][1];
        dat[edge[i][0]].push_back(edge[i][1]);
        dat[edge[i][1]].push_back(edge[i][0]);
    }
    attendence[1]=1;
    check(1,dat);
    if(flag!=0){cout << "NO";return 0;}
    else{
        cout << "YES"<<endl;
    for(int i=1;i<=n;i++){
        if(attendence[i]==-1){attendence[i]=0;}
    }
    for(int i=0;i<m;i++){
        cout<<attendence[edge[i][0]];
    }
    }
}
