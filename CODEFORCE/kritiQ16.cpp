#include<iostream>
using namespace std;

struct datte{
    int date;int month;int year;
    int leapyear(){
       
        if(year%4 !=0){return 0;}
        else {
            if(year%100!=0){return 1;}
            if(year%100 ==0 && year%400 ==0){return 1;}
            else return 0;
        }
        
    }
    int validity(){
        if(date<0 || month < 0){return 0;}
            if(month ==1 || month ==3 || month ==5 || month ==6 || month ==8 || month ==10 || month ==12)
            {if(date<=31) return 1;
            else return 0;}
            else if(month ==4 || month ==7 || month ==9 || month ==11 )
            {if(date <=30) return 1;
            else return 0;}
            else if(month ==2){
                if(leapyear()==0){if(date<=28) return 1; else return 0;}
                if(leapyear()==1){if(date<=29) return 1; else return 0;}}
    }
};

int main(){
    datte day1,day2;
    cin >> day1.date>>day1.month>>day1.year;
    cin >> day2.date>>day2.month>>day2.year;
    if(day1.validity() == 1 && day2.validity()==1){
        cout << "Dates are valid"<<endl;
    }
    else{cout << "Dates are not valid";return 0;}

    if(day1.date==day2.date && day1.month==day2.month && day1.year==day2.year){
        cout << "Dates are equal";
    }
    else {cout << "Dates are not equal";}

    
}