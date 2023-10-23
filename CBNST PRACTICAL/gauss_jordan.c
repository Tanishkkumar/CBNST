#include <stdio.h>

#define N 3  // Number of equations (adjust as needed)

int main() {
    double A[N][N + 1]; // Coefficient and constant matrix

    // Input the augmented matrix
    printf("Enter the augmented matrix (coefficients and constants):\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j <= N; j++) {
            scanf("%lf", &A[i][j]);
        }
    }

    // Perform Gauss-Jordan elimination
    for (int i = 0; i < N; i++) {
        // Pivoting: Find the pivot element
        double pivot = A[i][i];
        int pivotRow = i;

        for (int j = i + 1; j < N; j++) {
            if (A[j][i] > pivot) {
                pivot = A[j][i];
                pivotRow = j;
            }
        }

        // Swap the current row with the row containing the pivot
        for (int j = 0; j <= N; j++) {
            double temp = A[i][j];
            A[i][j] = A[pivotRow][j];
            A[pivotRow][j] = temp;
        }

        // Scale the pivot row to make the pivot element 1
        double scale = A[i][i];
        for (int j = i; j <= N; j++) {
            A[i][j] /= scale;
        }

        // Eliminate other rows
        for (int j = 0; j < N; j++) {
            if (j != i) {
                double factor = A[j][i];
                for (int k = i; k <= N; k++) {
                    A[j][k] -= factor * A[i][k];
                }
            }
        }
    }

    // Output the solutions
    printf("The solutions are:\n");
    for (int i = 0; i < N; i++) {
        printf("x[%d] = %lf\n", i, A[i][N]);
    }

    return 0;
}
