#include <stdio.h>

void findPairs(int arr[], int n, int target) {
    int count = 0;  
    for (int i = 0; i < n; i++) {
        
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                count++;  
            }
        }
    }
    
    printf("%d",count);
}

int main() {
    int n, target;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the target sum: ");
    scanf("%d", &target);
    findPairs(arr, n, target);

    
    return 0;
}
