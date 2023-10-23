#include <stdio.h>
#include <math.h>

int main() {
    int a;
    printf("Enter the number of equations in the field: ");
    scanf("%d", &a);

    int arr[10][11]; // Changed to 11 for storing the result of the equations
    float x[10];     // To store the solutions

    printf("Enter the equations in the field:\n");
    for (int i = 0; i < a; i++) {
        for (int j = 0; j <= a; j++) {
            printf("arr[%d][%d]:: ", i + 1, j + 1); // Arrays in C are 0-based
            scanf("%d", &arr[i][j]);
        }
    }

    // Perform Gaussian Elimination
    for (int i = 0; i < a; i++) {
        for (int j = i + 1; j < a; j++) {
            float factor = (float)arr[j][i] / arr[i][i];
            for (int k = i; k <= a; k++) {
                arr[j][k] -= factor * arr[i][k];
            }
        }
    }

    // Back-substitution to find solutions
    for (int i = a - 1; i >= 0; i--) {
        x[i] = arr[i][a];
        for (int j = i + 1; j < a; j++) {
            x[i] -= arr[i][j] * x[j];
        }
        x[i] /= arr[i][i];
    }

    // Display the solutions
    printf("The solutions are:\n");
    for (int i = 0; i < a; i++) {
        printf("x[%d] = %f\n", i + 1,round(x[i]));
    }

    return 0;
}
//2 1 4 12 4 11 -1 33 8 -3 2 20