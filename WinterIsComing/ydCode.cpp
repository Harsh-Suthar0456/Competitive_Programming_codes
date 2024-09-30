#include <iostream>
#include<string>

using namespace std ;

void pop( string  str , int position , int len  )
{
    for( int i= position ; i<(len-1) ; i++)
    {
        str[i]=str[i+1] ;
    }
    str[len-1] = '\0' ;
    //cout <<str << endl ;
}

int check = 0;

void Bremover (string str , int pos , int len)
{
    for( int i=pos-1 ; i>=0 ; i-- )
    {
        if( str[i]>='A' && str[i]<='Z') {
            pop( str , i , len ) ;
            pop(str , pos-1 , len-1) ;
            check = 2;
            
            return ;
        }
    }
    
    
    pop(str , pos , len ) ;
    check = 1;
    
    return ;
}

void bremover (string str, int pos , int len)
{
    for( int i=pos-1 ; i>=0 ; i-- )
    {
        if( str[i]>='a' && str[i]<='z') {
            pop( str , i , len ) ;
            
            pop(str , pos-1 , len-1) ;
            check = 2;
            return ;
        }
    }
    pop(str , pos , len ) ;
    check = 1;
    return ;
}

int main()
{
    int t;
    //scanf("%d" , &t) ;
    cin>> t ;
    while (t--)
    {
        string  str;
       // scanf("%s" , str) ;
        //printf("%s\n" , str);
        cin >> str;
        int len=str.length() ;
        for( int i=0 ; str[i]!='\0' ; i++)
        {
            if(str[i]=='B')
            {
                Bremover(str , i, len);
            
                len= len-check;
            }
            if(str[i]=='b')
            {
                bremover(str , i  , len) ;
                len = len - check  ;
            }
            
            if( check == 2) {
                i = i-2;
                check =0 ;
            }
            else if( check == 1)
            {
                i = i-1 ;
                check = 0 ;
            }
        }
       // printf("%s\n"  , str) ;
    }
    
    return 0;
}