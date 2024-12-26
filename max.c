#include <stdio.h>

void main() {
    int n;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid array size.\n");
        return;
    }

    int arr[n]; 

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); 
    }

    int max = arr[0]; 
    int min = arr[0];

    for (int i = 1; i < n; i++) { 
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    for(int i =0;i<n;i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }

    printf("The maximum value is: %d\n", max);
    printf("The maximum value is: %d\n", min);
}
