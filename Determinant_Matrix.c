#include <stdio.h>
int main(){
    int a[3][3], i, j, size;
    printf("Enter matrix size (2 or 3): ");
    scanf("%d", &size);
    printf("Enter matrix elements:\n");
    for(i=0; i<size; i++)
        for(j=0; j<size; j++)
            scanf("%d", &a[i][j]);

    if(size == 2) {
        int det = a[0][0]*a[1][1] - a[0][1]*a[1][0];
        printf("Determinant: %d", det);
    }
    else if(size == 3) {
        int det = a[0][0]*(a[1][1]*a[2][2] - a[1][2]*a[2][1])
                 - a[0][1]*(a[1][0]*a[2][2] - a[1][2]*a[2][0])
                 + a[0][2]*(a[1][0]*a[2][1] - a[1][1]*a[2][0]);
        printf("Determinant: %d", det);
    }
    return 0;
}