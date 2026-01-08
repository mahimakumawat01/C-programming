#include <stdio.h>

int main() {
    int i, j, n, row, col, k;
    
    // Input for the number of matrices
    printf("Enter the number of matrices (n): ");
    scanf("%d", &n);
    
    // Input for the number of rows and columns for each matrix
    printf("Enter the number of rows: ");
    scanf("%d", &row);
    printf("Enter the number of columns: ");
    scanf("%d", &col);
    
    // Initialize the matrices
    int matrices[n][row][col];
    
    // Input for the matrices
    for (k = 0; k < n; k++)
     {
        printf("Enter elements for matrix %d:\n", k + 1);
        for (i = 0; i < row; i++) 
        {
            for (j = 0; j < col; j++) 
            {
                scanf("%d", &matrices[k][i][j]);
            }
        }
    }
    
    // Display the matrices
    printf("Entered matrices:\n");
    for (k = 0; k < n; k++) 
    {
        printf("Matrix %d:\n", k + 1);
        for (i = 0; i < row; i++)
         {
            for (j = 0; j < col; j++)
            {
                printf("[%d] ", matrices[k][i][j]);
            }
            printf("\n");
        }
    }
    
    // Add the matrices
    int result[row][col];
    for (i = 0; i < row; i++)
     {
        for (j = 0; j < col; j++) 
        {
            result[i][j] = 0;
            for (k = 0; k < n; k++) 
            {
                result[i][j] += matrices[k][i][j];
            }
        }
    }
    
    // Display the result matrix
    printf("Sum of matrices:\n");
    for (i = 0; i < row; i++) 
    {
        for (j = 0; j < col; j++) 
        {
            printf("[%d] ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
