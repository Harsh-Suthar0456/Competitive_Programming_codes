#include <stdio.h>
 
int main()
 
{
    //char stri[8]={'a','b','c','d','e','f','g','h'} ;
    int n;
    scanf("%d" , &n);
    printf("%d",n);
    for(int j=0;j<n;j++)
    {
    char str[2] ;
    scanf("%s" , str) ;
    for( char i='1' ; i<='8' ; i++)
    {
        if(i!=str[1])
        {
            printf("%c%c\n" , str[0],i);
        }
        
    }
    for(char i='a' ; i<='h' ; i++)
    {
        
        if(i!=str[0])
        {
            printf("%c%c\n" , i , str[1]);
        }
    }
    
    }
    return 0;
}