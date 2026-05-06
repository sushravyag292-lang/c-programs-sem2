#include <stdio.h>

int main()
{
    int arr[100], n, pos, element, i;

    printf("Enter size: ");
    scanf("%d", &n);

    // Validate size
    if(n < 0 || n > 100)
    {
        printf("Invalid size!");
        return 0;
    }

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter position to insert (1 to %d): ", n + 1);
    scanf("%d", &pos);

    // Validate position
    if(pos < 1 || pos > n + 1)
    {
        printf("Invalid position!");
        return 0;
    }

    // Check array overflow
    if(n == 100)
    {
        printf("Array is full!");
        return 0;
    }

    printf("Enter element to insert: ");
    scanf("%d", &element);

    // Shift elements to right
    for(i = n; i >= pos; i--)
    {
        arr[i] = arr[i - 1];
    }

    // Insert element
    arr[pos - 1] = element;
    n++;

    printf("\nUpdated array:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}