#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int x, k ; scanf("%d %d" , &x , &k) ;
   // printf("%d %d\n" , x , k) ;
    int * global_list = (int*)malloc(100000*sizeof(int )) ;
    int * sum = (int*)calloc(100000 , sizeof(int )) ;
    int index[k+1] ; index[0]=0 ;
    int copy_index[k+1] ;// for( int i =0 ; i< k+1 ; i++) copy_index[i] =index[i] ;
    //int temp = 0 ;
    for(int i=0 ; i< k ;i++)
    {
         scanf("%d" , &index[i+1]) ;
         index[i+1]+=index[i] ;
         copy_index[i]= index[i] ;
         for( int j=index[i] ; j<index[i+1] ; j++ ) 
         {
             scanf("%d" , &global_list[j]) ;
             if(j==index[i])
             {
                 sum[j]=global_list[j];
             }
             else sum [j] = sum[j-1]+global_list[j]; 
         } 
        // temp+=index[i] ;
    }
    copyindex[k]=index[k];
    int updates[k] ;
    for( int i=0 ; i< k ; i++) updates[i] = 0 ;
   //for(int i=0 ; i<index[k] ; i++) printf("%d " , sum[i]) ;
    
    int temp = 1 ;
    while( temp ) 
    {
        temp = 0 ;
        for ( int i=0 ; i<k ; i++)
        {
            
            while(index[i]==index[i+1])
            {
                i++ ;
            }    
            if(i>=k ) break ;
           // printf("hi%d " , i)  ;
            int max_index =-1 , max_sum= 0 ,good_index;
            for( int j=index[i] ; j<copy_index[i+1] ; j++)
            {
                if( updates[i]== 0 && sum[j]+x < 0)
                {
                    max_index = j ;
                    break ;
                }
                else if( updates[i]>0 && sum[j]+x < sum[index[i]-1])
                {
                 //   printf("present   ");
                    max_index = j ; 
                    break ;
                }
                
            }
            if( max_index == -1) 
            {
                max_index = copy_index[i+1] ;
                
               // printf("hi") ;
            }    
            //printf("%d yes " , max_index) ;
            if(updates[i]>0)
            {
            for( int j=index[i] ; j< max_index ; j++ )
            {
                if( sum[j]-sum[index[i]-1] > max_sum  ) 
                {
                    max_sum = sum[j]-sum[index[i]-1];
                    good_index = j ;
                   
                }
                
            }
            }
            else if( updates[i]==0 )
            {
                for( int j=index[i] ; j< max_index ; j++ )
            {
                if( sum[j] > max_sum  ) 
                {
                    max_sum = sum[j];
                    good_index = j ;
                }
            }
            }
            
           // if(i==0) printf("%d op" , max_sum) ;
            
            
            if( max_sum> 0 )
            {
                x += max_sum ;
                index[i] = good_index+1 ; 
                temp ++ ;
                updates[i]++ ;
            
             // printf("%d hi\n" ,i) ;
            }
        
    }    
          // printf("%d " , x) ;
           //for(int i=0 ; i<k ; i++) printf("%d " , index[i]) ;
          //printf("\n") ;
    }
   printf("%d" , x) ;
    
    
    return 0 ;
}