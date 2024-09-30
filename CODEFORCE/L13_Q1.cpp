#include<simplecpp>
main_program{
        int n;
        cout<<"Enter the number of integers you would be pleased to enter:";
        cin>>n;
        int a[1000];
        for(int i=0;i<n;i++){
                cin>>a[i];//takes input
                if(i!=0){
                        for (int j=0;j<i;j++){
                                if (a[j]<a[i]){   //searches for that element which is smaller than entered one
                                        int temp=a[j];
                                        a[j]=a[i];
                                        for(int k=i;k>j+1;k--){
                                                a[k]=a[k-1];//increases the index of each succeeding element by 1
                                        }
                                        a[j+1]=temp;
                                }
                        }
                }
        }
        cout<<"SORTED SEQUENCE USING SELECTION SORT:"<<endl;
        for(int i=0;i<n;i++) cout<<a[i]<<endl;
}