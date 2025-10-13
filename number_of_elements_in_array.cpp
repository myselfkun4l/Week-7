#include <stdio.h>

int main() {
    int n, i;
    int arr[100]; 

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n > 100 || n <= 0) {
        printf("Invalid number of elements. Please enter between 1 and 100.\n");
        return 1;  
    }

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Number of elements in the array: %d\n", n);

    return 0;
}


