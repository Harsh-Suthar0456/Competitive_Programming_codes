#include<simplecpp>

void swap(int& a, int& b){
int temp;
temp=a;a=b;b=temp;}

void selectionsort(int* a, int n){
for(int i=0;i<n;i++){
for(int j=0;j<n-1;j++){
if(a[j]<a[j+1]){swap(a[j],a[j+1]);}
}}
} 

main_program{
int arr[1000],b[20],freq[11]={1,1,1,1,1,1,1,1,1,1,1};
int i=-1,count=0;
do
{
i++;
cin >>arr[i];
count++;
}
while(arr[i]!=-1);
count-=1;
selectionsort(arr,count);
int k=1;
b[0]=arr[0];
for(int i=0;i<count && k<11;i++){
if(b[k-1]==arr[i]){freq[k]++;continue;}
b[k]=arr[i];
k++;
}
freq[0]--;
for(int l=0;l<11;l++){
cout<<b[l]<< " "<< freq[l]<<"times."<<endl;}}