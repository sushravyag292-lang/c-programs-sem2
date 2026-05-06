#include <stdio.h>

int main() {
    int arr[100], n, i, j, min, temp;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Selection Sort Logic
    for(i = 0; i < n - 1; i++) {
        min = i; // Assume the current element is the smallest
        for(j = i + 1; j < n; j++) {
            if(arr[j] < arr[min]) {
                min = j; // Found a smaller element
            }
        }
        
        // Swap the found minimum element with the first element
        temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }

    printf("Sorted array:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}