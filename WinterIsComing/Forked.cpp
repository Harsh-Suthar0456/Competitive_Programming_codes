#include<iostream>
using namespace std;

int main(){
    int t,a,b,xk,yk,xq,yq,xmin,xmax,ymin,ymax;
    cin >> t;
    for(int i=0;i<t;i++){
        cin >> a>>b>>xk>>yk>>xq>>yq;
        xmin=min(xk,xq);xmax=max(xk,xq);
        ymin=min(yk,yq);ymax=max(yk,yq);
        int answer=0;
        if((ymax-ymin==2*a || ymin==ymax) && (xmax-xmin==2*b || xmin==xmax))
        {    
            if(ymin==ymax || xmin==xmax){cout << 2<<endl;continue;}
            //if(a!=b){cout<<2<<endl;continue;}
            else{cout<<1<<endl;continue;}}
        else if((ymax-ymin==2*b || ymin==ymax) && (xmax-xmin==2*a || xmin==xmax))
        {if(ymin==ymax || xmin==xmax){cout << 2<<endl;continue;}
            //if(a!=b){cout<<2<<endl;continue;}
            else{cout<<1<<endl;continue;}}
        else if((ymax-ymin==a+b || ymax-ymin==abs(a-b)) && (xmax-xmin==a+b || xmax-xmin==abs(a-b)))
        {if(a!=b) answer=2;
        else{answer=1;}}
        cout << answer<<endl;
    }
}