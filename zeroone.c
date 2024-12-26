#include <stdio.h>
void sot(int arr[],int n){
    int c0 = 0, c1 =0, c2 =0;
    for(int i =0;i<n;i++){
        if(arr[i] == 0){
            c0 += 1;
        }else if(arr[i] == 1){
            c1 += 1;
        }else{
            c2 += 1;
        }
    }
    int iz =0;{
        for(int i =0;i<c0;i++){
            arr[iz++] = 0;
        }
        for(int i =0;i<c1;i++){
            arr[iz++] = 1;
        }for(int i =0;i<c2;i++){
            arr[iz++] = 2;
        }
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i =0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    sot(arr,n);
    for(int i =0;i<n;i++)
    printf("%d",arr[i]);
    return 0;
}