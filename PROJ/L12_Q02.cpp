#include<simplecpp>
int num(char* arr){
    int size=0;
    for(int i=0;arr[i] != '\0';i++){
        size++;
    }
    int digit;
    int num=0;
    for(int i=0;i<size;i++){
        digit=arr[i]-'0';
        num += digit* pow(10,size-i-1);
    }
return num;}
main_program{
    char hlo[10]="123876";

    cout << num(hlo);
}