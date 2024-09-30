#include<iostream>
using namespace std;
int main(){
    string date1, date2;
    cout << "enter date 1 in the format dd/mm/yyyy: ";
    cin >> date1;
    cout << "enter date 2 in the format dd/mm/yyyy: ";
    cin >> date2;

    int year1= stoi(date1.substr(6, 4)), year2= stoi(date2.substr(6, 4));
    int month1= stoi(date1.substr(3, 2)), month2= stoi(date2.substr(3, 2));
    int day1= stoi(date1.substr(0, 2)), day2= stoi(date2.substr(0, 2));
    
    int days;
    if(day2-day1 <0){
        days= day2-day1 + 30;
        month2--;
    } else{days=day2-day1;}
    int months;
    if(month2-month1 <0){
        months=month2-month1 +12;
        year2--;
    } else{months=month2-month1;}
    int years=year2-year1;
    cout << years << "years, " << months << " months and " << days << " days";
    return 0 ;
}