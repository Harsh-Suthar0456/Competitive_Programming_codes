#include<stdio.h>

struct datte{
    int date;
    int month;
    int year;
};

int leapyear(struct datte d){
    if(d.year%4 !=0){
        return 0;
    }
    else {
        if(d.year%100!=0){
            return 1;
        }
        if(d.year%100 ==0 && d.year%400 ==0){
            return 1;
        }
        else{
            return 0;
        }
    }
}

int validity(struct datte d){
    if(d.date<0 || d.month < 0){
        return 0;
    }
    if(d.month ==1 || d.month ==3 || d.month ==5 || d.month ==6 || d.month ==8 || d.month ==10 || d.month ==12){
        if(d.date<=31){return 1;}
        else{ return 0;}
    }
    else if(d.month ==4 || d.month ==7 || d.month ==9 || d.month ==11 ){
        if(d.date <=30){return 1; }
        else{return 0; }
    }
    else if(d.month ==2){
        if(leapyear(d)==0){
            if(d.date<=28){return 1;}
            else{return 0;}
        }
        if(leapyear(d)==1){
            if(d.date<=29){return 1;}
            else{return 0;}
        }
    }
}

int main(){
    struct datte day1,day2;
    scanf("%d %d %d", &day1.date, &day1.month, &day1.year);
    scanf("%d %d %d", &day2.date, &day2.month, &day2.year);
    if(validity(day1) == 1 && validity(day2)==1){
        printf("Dates are valid\n");
    }
    else{
        printf("Dates are not valid");
        return 0;
    }
    if(day1.date==day2.date && day1.month==day2.month && day1.year==day2.year){
        printf("Dates are equal");
    }
    else{
        printf("Dates are not equal");
    }
}