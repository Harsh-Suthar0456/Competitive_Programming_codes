#include<stdio.h>

#define MOD 1000000007 

long long power[100000] ; 

int ln2( long long  x)
{
    int temp = 0 ; 
    
    while(x)
    {
        temp++ ; 
        x /= 2 ; 
    }
    
    return temp  ; 
}


void solve()
{
    int N ; scanf("%d" , &N) ; 
    
    int max = 0 ; 
    long long A[N] ;
    for( int i=0 ; i<N ; i++)
    {
        scanf("%lld" , &A[i]) ; 
        max+= ln2(A[i]) ; 
    }
    
    for( int i=0 ; i<N ;  i++)
    {
        printf("%d " , max-N+i+1); 
    }
    
    printf("\n") ; 
}

int main ()
{
    int T ; scanf("%d" , &T) ; 
    while(T--)
    {
        solve() ; 
    }
    
         
         
    
    return 0; 
}