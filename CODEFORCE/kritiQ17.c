#include<stdio.h>

struct complex{
    int x,y;
};

struct complex add(struct complex a,struct complex b){
    struct complex k;
    k.x=a.x+b.x;k.y=a.y+b.y;
    return k;

}

struct complex subtract(struct complex a,struct complex b){
    struct complex k;
    k.x=a.x-b.x;k.y=a.y-b.y;
    return k;

}

struct complex multiply(struct complex a,struct complex b){
    struct complex k;
    k.x=a.x*b.x-a.y*b.y;k.y=a.y*b.x+b.y*a.x;
    return k;

}

int main(){
    struct complex a,b;
    scanf("%d",&a.x);
    scanf("%d",&a.y);
    scanf("%d",&b.x);
    scanf("%d",&b.y);
    struct complex m;
    m=add(a,b);
    printf("%d %d\n",m.x,m.y);
    m=subtract(a,b);
    printf("%d %d\n",m.x,m.y);
    m=multiply(a,b);
    printf("%d %d\n",m.x,m.y);
    return 0;
    
}