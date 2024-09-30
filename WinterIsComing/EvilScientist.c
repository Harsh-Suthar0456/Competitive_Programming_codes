#include <stdio.h>

void count( long long* input , int partlen , int sum , int filled )
{
   
    
    if(sum<0) return  ;
    
    if ( filled == partlen )
    {
        if(sum==0)
        {
        (*input)+=1  ;
        return  ;
        }
        else return ;
    }
    

    for( int i=0 ; i<10 ; i++)
    {
      count( input , partlen , sum-i , filled +1) ; 
    }
    
    
}

int main ()
{
    long long n , k ;
    scanf("%lld %lld" , &n , &k ) ;
    long long partitions = n/k ;
    long long  arr[partitions*9+1] ; 
     long long  ans =  0;
     for( int sum = 0 ; sum < partitions*9+1 ; sum++)
     {
         int filled = 0 ;
         long long  temp=1 ;
         arr[sum]=0 ; 
         count ( &arr[sum] , partitions , sum , 0 ) ; 
         for( int i=0 ; i<k ; i++ )
         {
             temp*= arr[sum] ; 
         }
         ans += temp ;
     }
    printf("%lld" , ans) ; 
   /* for( int i=0 ; i<partitions*9; i++)
    {
        printf("%d " , arr[i]) ;
    }*/
    return 0 ;
}