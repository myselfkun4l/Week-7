#include <stdio.h>

int main() {
    int n, i;
    int arr[100];
    int sum = 0;

    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        sum += arr[i];
    }

    printf("Sum of array elements is: %d\n", sum);

    return 0;
}

