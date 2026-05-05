// Replacing negatives numbers with 0
#include <stdio.h>
int main(){
    int n;
    printf("Enter n: "); 
    scanf("%d", &n);
    int a[n];
    printf("Enter elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++) {
        if (a[i] < 0){
        a[i] = 0;
        }
    }
    printf("Array after replacing negatives with 0: ");
    for (int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    return 0;
}
