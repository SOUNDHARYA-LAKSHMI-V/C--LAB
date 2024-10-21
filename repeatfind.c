#include <stdio.h>

int main() {
    int arr[] = {2, 7, 4, 7, 8, 3, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    int i, j;
    printf("The given array is : ");
    for(i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("The repeating elements are: ");
    for(i = 0; i < size; i++) {
        for(j = i + 1; j < size; j++) {
            if(arr[i] == arr[j]) {
                printf("%d ", arr[i]);
                break;
            }
        }
    }
    printf("\n");

    return 0;
}

