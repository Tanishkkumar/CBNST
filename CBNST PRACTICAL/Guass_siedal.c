#include <stdio.h>
#include <math.h>

#define N 3  // Number of equations (adjust as needed)

int main() {
    double A[N][N + 1]; // Coefficient and constant matrix
    double X[N];        // Initial guess and final solution
    double newX[N];     // Temporary new solution

    // Input the coefficient and constant matrix
    printf("Enter the augmented matrix (coefficients and constants):\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j <= N; j++) {
            scanf("%lf", &A[i][j]);
        }
    }

    // Input the initial guess for variables
    printf("Enter the initial guess for variables:\n");
    for (int i = 0; i < N; i++) {
        scanf("%lf", &X[i]);
    }

    int maxIterations;
    double tolerance;
    
    printf("Enter the maximum number of iterations: ");
    scanf("%d", &maxIterations);

    printf("Enter the tolerance (e.g., 0.00001): ");
    scanf("%lf", &tolerance);

    int iterations = 0;
    int converged = 0;

    while (iterations < maxIterations) {
        converged = 1;

        for (int i = 0; i < N; i++) {
            newX[i] = A[i][N];
            for (int j = 0; j < N; j++) {
                if (j != i) {
                    newX[i] -= A[i][j] * X[j];
                }
            }
            newX[i] /= A[i][i];

            if (fabs(newX[i] - X[i]) > tolerance) {
                converged = 0;
            }

            X[i] = newX[i];
        }

        iterations++;

        if (converged) {
            break;
        }
    }

    printf("Solution after %d iterations:\n", iterations);
    for (int i = 0; i < N; i++) {
        printf("x[%d] = %lf\n", i, X[i]);
    }

    return 0;
}
