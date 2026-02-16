#include <stdio.h>

void main() {
    int n, temp;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter %d sorted elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &temp);

    int l = 0, r = n - 1, mid, found = 0;

    while (l <= r) {
        mid = (l + r) / 2;

        if (a[mid] == temp) {
            printf("Element %d found at index %d\n", temp, mid);
            found = 1;
            break;
        }
        else if (a[mid] < temp) {
            l = mid + 1;
        }
        else {
            r = mid - 1;
        }
    }

    if (!found) {
        printf("Element %d not found in the array\n", temp);
    }
}
