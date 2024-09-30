#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

struct speed{
    int x;
    int y;
    double s;
};

long double source(speed track){
    return (1.0*(track.y-track.x))/(track.s);
}

long double sink(speed track){
    return (1.0*(track.y-track.x))/((track.s)+2.0);
}



int main(){
    int n,l;
    cin >> n>>l;
    speed track[200005];
    for(int i;i<n;i++){
        cin >> track[i].x>>track[i].y>>track[i].s;
    }
    track[n].x=l; 
    int start=0;
    int end;
    long double energy=0;
    long double time=0;
    time+=track[0].x;
    for(int i=0;i<n;i++){
        if(i==n-1 || track[i].y != track[i+1].x || track[i].s<track[i+1].s){
            end=i+1;
            energy=0;
            for(int j=start;j<end;j++){
                energy += source(track[j]);
                time+= source(track[j]);
            }
            if(track[i].y != track[i+1].x){
                time+=track[i+1].x - track[i].y;
                if(energy >= (track[i+1].x - track[i].y)/2.0){
                    time -= (track[i+1].x - track[i].y)/2.0;
                    energy -= (track[i+1].x - track[i].y)/2.0;
                }
                else{start=i+1;
                time-=energy;
                energy=0;
                continue;}
            }
            //cout << time<<"kk"<<endl;
            int flag=0;
            for(int j=end-1;j>=start && flag==0;j--){
                
                if(energy-(source(track[j]))>=sink(track[j])){
                    energy-=source(track[j])+sink(track[j]);
                    time -= sink(track[j])*(2.0)/((track[j].s));
                    //cout << time<<endl;
                }
                else{
                    start=i+1;
                    time -= 1.0*(track[j].y-track[j].x+(track[j].s)*(energy-(source(track[j]))))/((track[j].s)*((track[j].s)+1));
                    energy=0;
                    flag=1;
                }
            }
            start=i+1;
        }
        
        //cout <<start<< " "<<time<<endl;
    }
    cout.precision(11);
    cout<<time;
}