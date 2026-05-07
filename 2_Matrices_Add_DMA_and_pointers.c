#include <stdio.h>
#include <stdlib.h>
int main() {
    int n, m;
    printf("Enter rows and columns: ");
    scanf("%d %d", &n, &m);
    // Allocate rows
    int** mat1 = (int**)malloc(n * sizeof(int*));
    int** mat2 = (int**)malloc(n * sizeof(int*));
    int** sum = (int**)malloc(n * sizeof(int*));
    // Allocate columns for each row
    for(int i = 0; i < n; i++){
        mat1[i] = (int*)malloc(m * sizeof(int));
        mat2[i] = (int*)malloc(m * sizeof(int));
        sum[i] = (int*)malloc(m * sizeof(int));
    }
    printf("Enter Matrix 1:\n");
    for (int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++){
            scanf("%d", (*(mat1 + i) + j)); // same as &mat1[i][j]
        }
    }
    printf("\nEnter Matrix 2:\n");
    for (int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++){
            scanf("%d", (*(mat2 + i) + j));
        }
    }
    // Addition
    for (int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++){
            *(*(sum + i) + j) = *(*(mat1 + i) + j) + *(*(mat2 + i) + j);
        }
    }
    printf("\nSum of matrices:\n");
    for (int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++){
            printf("%d ", *(*(sum + i) + j));
        }
        printf("\n");
    }
    // Free memory
    for(int i = 0; i < n; i++){
        free(mat1[i]);
        free(mat2[i]);
        free(sum[i]);
    }
    free(mat1);
    free(mat2);
    free(sum);

    return 0;
}