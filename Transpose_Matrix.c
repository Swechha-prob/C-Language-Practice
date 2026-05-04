#include <stdio.h>
int main(){
    int rows, cols;
    printf("Enter rows and cols: ");
    scanf("%d %d", &rows, &cols);
    int mat[rows][cols];
    printf("Enter matrix elements:\n");
    for(int i = 0; i < rows; i++)
        for(int j = 0; j < cols; j++)
            scanf("%d", &mat[i][j]);
    int transpose[cols][rows];
    // doing Transpose
    for(int i = 0; i < rows; i++)
        for(int j = 0; j < cols; j++)_
            transpose[j][i] = mat[i][j];
    printf("Transpose:\n");
    for(int i = 0; i < cols; i++) {
        for(int j = 0; j < rows; j++)
            printf("%d ", transpose[i][j]);
        printf("\n");
    }
    return 0;
}
