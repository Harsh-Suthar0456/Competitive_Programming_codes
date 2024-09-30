#include <stdio.h>
#include<string.h>

char* determine(int a[4][4]){
   for(int i=1;i<=3;i++){
      if(a[i][1]==a[i][2]&&a[i][2]==a[i][3]){if(a[i][1]==10) return "X";
                                             if(a[i][1]==-10) return "O";}
      if(a[1][i]==a[2][i]&& a[2][i]==a[3][i]){if(a[1][i]==10) return "X";
                                              if(a[1][i]==-10) return "O";}}
   if(a[1][1]==a[2][2]&&a[2][2]==a[3][3]){if(a[1][1]==10) return "X";
                                          if(a[1][1]==-10) return "O";}
   if(a[1][3]==a[2][2]&&a[2][2]==a[3][1]){if(a[1][3]==10) return "X";
                                          if(a[1][3]==-10) return "O";}
   else return "Y";
   return 0;
}

int main()
{
    int arr[4][4]={{0,0,0,0},{1,0,0,0},{0,0,0,0},{0,0,0,0}};
    int i=10,a,b;
    printf("%p",&arr[1][1]);
    for(int input=1;input<=9;input++){
        scanf("%d %d", &a, &b);
        arr[a][b]=i;
        i*=-1;
        if(strcmp(determine(arr),"Y")!=0){ printf("%s", determine(arr)); break;}
        if(input==9 && strcmp(determine(arr),"Y")==0) printf("T");
    }
}