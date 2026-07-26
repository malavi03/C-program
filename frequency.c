#include<stdio.h>
int frequencynum(int arr[],int size){
int visited[size];
for(int i=0;i<size;i++){
visited[i]=0;
}
for(int i=0;i<size;i++){
if(visited[i]==1){
continue;
}
int count =1;
for(int j=i+1;j<size;j++){
if(arr[i]==arr[j]){
count++;
visited[j]=1;}
}
printf("frequency :%d %d",arr[i],count);
}
}
int main(){
int arr[]={1,2,3,2,4,5,3};
int size =sizeof (arr)/sizeof (arr[0]);
frequencynum(arr,size);
return 0;
}
