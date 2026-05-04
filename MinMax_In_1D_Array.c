#include <stdio.h>
int main(){
    int n, min,max;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter elements of array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    max = min = a[0];
    printf("Even elements:");
    for (int i = 1; i < n; i++) {
        if (a[i] < min) {
            min = a[i];
        }
        if (a[i] > max) {
            max = a[i];
        }
        if (a[i]%2 == 0){
            printf("%d ",a[i]);
        }
    }
    printf("\nMinimum element: %d\n", min);
    printf("Maximum element: %d", max);
    return 0;
}
