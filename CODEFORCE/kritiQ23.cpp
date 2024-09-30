#include<iostream>
using namespace std;
struct dist{
    int feet;float inch;
};

dist distadder(dist d1,dist d2){
    dist result;
    result.feet=d1.feet+d2.feet;
    result.inch=d1.inch+d2.inch;
    while(result.inch>=12){
        result.feet++;result.inch-=12;
    }
    return result;
}

int main(){
    dist value[100],result;result.feet=0;result.inch=0.0;
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> value[i].feet>>value[i].inch;
        result=distadder(result,value[i]);
    }
    cout.precision(2);
    cout << result.feet<<" "<<result.inch;
}