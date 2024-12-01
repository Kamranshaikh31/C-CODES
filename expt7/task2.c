/*
    Expt. No : 7 (task 2)
    Title : WAP to calculate sum of two matrix.


    Name: Shaikh Kamran Qamaralam
    Class & Div: ECS-E
    UIN: 241S012
 */
// calculate sum of two matrix.
#include <stdio.h>

int main() {
    // Declare variables for the number of rows and columns in the matrices
    int rows, cols;

    // Prompt the user to enter the number of rows for the matrices
    printf("Enter the number of rows: ");
    // Read the number of rows from the user
    scanf("%d", &rows);

    // Prompt the user to enter the number of columns for the matrices
    printf("Enter the number of columns: ");
    // Read the number of columns from the user
    scanf("%d", &cols);

    // Declare three matrices: matrix1, matrix2, and sum (to store the result of the addition)
    int matrix1[rows][cols], matrix2[rows][cols], sum[rows][cols];

    // Prompt the user to enter the elements of the first matrix
    printf("Enter elements of the first matrix:\n");
    // Use a nested loop to read each element of the first matrix
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            // Read the element at matrix1[i][j]
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Prompt the user to enter the elements of the second matrix
    printf("Enter elements of the second matrix:\n");
    // Use a nested loop to read each element of the second matrix
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            // Read the element at matrix2[i][j]
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Perform the addition of the two matrices
    // Loop through each element in the matrices
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            // Add corresponding elements of matrix1 and matrix2, and store the result in sum
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Print the sum matrix
    printf("Sum of the two matrices:\n");
    // Loop through each element of the sum matrix
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            // Print each element in the sum matrix
            printf("%d ", sum[i][j]);
        }
        // Move to the next line after printing a row of the matrix
        printf("\n");
    }

    return 0;
}



/*OUTPUT
Enter the number of rows: 2
Enter the number of columns: 2
Enter elements of the first matrix:
2 2
3 3
Enter elements of the second matrix:
4 4
5 5
Sum of the two matrices:
6 6 
8 8 

*/
