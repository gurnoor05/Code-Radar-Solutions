#include <stdio.h>
void rotate(int arr[],int a,int b){
    int i,j;
    i=a;
    j=b;
    while(i<j){
        int temp;
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        j++;
        j--;
    }
}
void main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int k;
    scanf("%d",&k);
    rotate(arr,0,n-1);
    rotate(arr,0,k-1);
    rotate(arr,k,n-1);
    for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);
        }
}