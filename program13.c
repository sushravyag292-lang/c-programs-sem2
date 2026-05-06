#include <stdio.h>

int main() {
    int arr[100], n, i, pos, value, choice, found;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    do {
        printf("\n1.Traversal  2.Insertion  3.Deletion  4.Search  5.Exit\n");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                for(i = 0; i < n; i++)
                    printf("%d ", arr[i]);
                break;

            case 2:
                scanf("%d %d", &pos, &value);
                for(i = n; i >= pos; i--)
                    arr[i] = arr[i-1];
                arr[pos-1] = value;
                n++;
                break;

            case 3:
                scanf("%d", &pos);
                for(i = pos-1; i < n-1; i++)
                    arr[i] = arr[i+1];
                n--;
                break;

            case 4:
                scanf("%d", &value);
                found = 0;
                for(i = 0; i < n; i++) {
                    if(arr[i] == value) {
                        printf("Found at %d\n", i+1);
                        found = 1;
                        break;
                    }
                }
                if(!found) printf("Not Found\n");
                break;
        }
    } while(choice != 5);

    return 0;
}