int main(){        // 4527
int k;
cin >> k;
for(int i=pow(10,k-1);i<pow(10,k);i++){
    int a,b,alter=1,flag=1;
    a=i%10; b=((i%100)-a)/10; int c=i/100;
    for(int j=1;j<k;j++){
        if(alter==1){if(a<=b){flag=0; break;}}
        if(alter==-1){if(b<=a){flag=0; break;}}
        a=b;
        b=c%10;
        c=c/10;

    }
    if(flag==1){cout << i<<endl;}

}
}