#include<iostream>
using namespace std;
double displacement(double x, double y){
    double disp;
    disp = pow((pow(x, 2)+pow(y, 2)), 0.5);
return disp;
}

int main(){
    int pincode, distance=0, p[100], inst;
    double x, y, step[100];
    cout << "enter the pin code: ";
    cin >> pincode;
    cout << "enter the number of navigational instructions: ";
    cin >> inst;
//assgning numbers from the pincode to directions
    int pN=pincode/1000; int pS=(pincode/100)%10; int pE=(pincode/10)%10; int pW=pincode%10;
  // dir and displ
  /*hello*/  
    cout << "enter the instructions below as [pin] [steps]: "<<endl;
    for(int i=1;i<=inst;i++){
        cin >> p[i] >> step[i];
        if(p[i]==pN){
            x +=step[i];
        }
        if(p[i]==pS){
            x -=step[i];
        }if(p[i]==pE){
            y +=step[i];
        }if(p[i]==pW){
            y -=step[i];
        }
        distance +=step[i];
    }
//finding the quarter
    cout << distance<<endl;
    cout << displacement(x, y)<<endl;
    if(x==0 || y==0){
        cout << "-1";
    }
    else if(x>0 && y>0){
        cout << "1";
    }
    else if(x<0 && y>0){
        cout << "2";
    }
    else if(x<0 && y<0){
        cout << "3";
    }
    else if(x>0 && y<0){
        cout << "4";
    }
    return 0;

}