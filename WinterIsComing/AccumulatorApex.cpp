#include<iostream>
#include<queue>
using namespace std;

int main(){
    long long int x,k,n,indsum=0;
    cin >>x>>k;
    int input[100000];
    long long int sum[100000];
    long long int* update = new long long int[k];
    long long int* index = new long long int[k];
    long long int* size = new long long int[k];
    //INPUT
    for(int i=0;i<k;i++){
        cin>>n;
        update[i]=0;
        size[i]=n;
        index[i]=indsum;
        for(int j=0;j<n;j++){
        cin >>input[indsum+j];
        if(j==0){sum[indsum+j]=input[indsum+j];}
        else{sum[indsum+j]=sum[indsum+j-1]+input[indsum+j];}
        }
        indsum +=n;
    }

    int temp=1;
    while(temp){
        temp=0;
        //temp=0;
        //cout << "p";
        //list 1 me start kiya hai
        //int elemnum=index[0 + update[0]];
        //int listnum=0;
        //till end of element
        /*while(elemnum<indsum && listnum<k){
            if(update[listnum]==0){
                //break condition
                if(sum[elemnum]+x <0){
                        listnum++;
                        while(listnum<k && update[listnum]==-1){
                            //if(listnum+1 ==k-1) break;
                            listnum++;
                        }
                        if(listnum==k) break;
                        elemnum=index[listnum]+update[listnum];
                }
                //.
                if(sum[elemnum]>0){
                    while(elemnum<indsum && elemnum<index[listnum+1] && sum[elemnum+1]>=sum[elemnum])
                    {elemnum++;}
                    x +=sum[elemnum];
                    index[listnum]=elemnum;
                    if(index[listnum]==k-1 || )
                }

            }
        }*/
        int origup;
        for(int listnum=0;listnum<k;listnum++){
            int kitnenipte=0,huakya=0;
            if(update[listnum]==size[listnum]) continue;
            origup=update[listnum];
            for(int el=index[listnum]+update[listnum];update[listnum]<size[listnum];update[listnum]++){
                long long int element=index[listnum]+update[listnum];
                if(origup==0){
                    if(x+sum[element] <0) break;
                    else if(sum[element]>0){//x+=sum[element];
                    temp=1;
                    while(update[listnum]<size[listnum]-1 && input[index[listnum]+update[listnum]+1]>0){
                        update[listnum]++;
                        //cout<<listnum<<'p'<<endl;
                    }
                    //cout<<"kj"<<listnum<<" "<<update[listnum]<<endl;
                    x+=sum[index[listnum]+update[listnum]];

                    origup=update[listnum]+1;
                    }
                    //kitnenipte++;
                }
                else{
                    //cout << listnum<<" "<<update[listnum]<<endl;
                    //kitnenipte++;
                    if(x+sum[element]-sum[index[listnum]+origup-1] <0){ break;}
                    else if(sum[element]-sum[index[listnum]+origup-1]>0){
                        temp=1;
                    //x+=sum[element]-sum[element-kitnenipte];
                    while(update[listnum]<size[listnum]-1 && input[index[listnum]+update[listnum]+1]>0){
                    update[listnum]++;}
                    x+=sum[index[listnum]+update[listnum]]-sum[index[listnum]+origup-1];
                    origup=update[listnum]+1;
                    }
                }
                //cout << x<<endl;
            }
            
                update[listnum]=origup;
                //update[listnum] -=kitnenipte;
                //cout<<listnum<< " "<<update[listnum]<<endl;
            //cout << listnum<<" "<<x<<endl;
        }

    }
    cout << x;
    /*for(int i=0;i<indsum;i++){
        cout << sum[i]<<endl;
    }*/
    delete[] update;
    delete[] index;
    delete[] size;
}