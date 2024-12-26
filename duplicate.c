#include<stdio.h>
void dup(int arr[],int n){
    int seen[n];
    for(int i =0;i<n;i++){
        for(int j = i+1;j<n;j++){
            if(arr[i] == arr[j]){
                printf("%d",arr[j]);
            }
        }
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i =0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    dup(arr,n);
    return 0;
    
}