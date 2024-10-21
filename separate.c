#include <stdio.h>

int main() {
    int arr[100], even[100], odd[100];
    int n, i, evenIndex = 0, oddIndex = 0;
    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &n);
    printf("Input %d elements in the array:\n", n);
    for(i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < n; i++) {
        if(arr[i] % 2 == 0) {
            even[evenIndex] = arr[i];
            evenIndex++;
        } else {
            odd[oddIndex] = arr[i];
            oddIndex++;
        }
    }
    printf("The Even elements are :\n");
    for(i = 0; i < evenIndex; i++) {
        printf("%d ", even[i]);
    }
    printf("\n");
    printf("The Odd elements are :\n");
    for(i = 0; i < oddIndex; i++) {
        printf("%d ", odd[i]);
    }
    printf("\n");

    return 0;
}

