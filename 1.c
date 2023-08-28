#include <stdio.h>
#include <math.h>

double calculateAbsoluteError(double trueValue, double approxValue) {
    return fabs(trueValue - approxValue);
}

double calculateRelativeError(double trueValue, double approxValue) {
    return calculateAbsoluteError(trueValue, approxValue) / trueValue;
}

double calculatePercentageError(double trueValue, double approxValue) {
    return calculateRelativeError(trueValue, approxValue) * 100;
}

int main() {
    double trueValue;
    int position;

    printf("Enter the true value: ");
    scanf("%lf", &trueValue);
    printf("Enter the position for round-off and truncation: ");
    scanf("%d", &position);

    double roundOffValue = round(trueValue * pow(10, position)) / pow(10, position);

    double truncValue = floor(trueValue * pow(10, position)) / pow(10, position);

    double absErrorRound = calculateAbsoluteError(trueValue, roundOffValue);
    double relErrorRound = calculateRelativeError(trueValue, roundOffValue);
    double percentErrorRound = calculatePercentageError(trueValue, roundOffValue);

    printf("Round-off:\n");
    printf("Rounded-off Value: %lf\n", roundOffValue);
    printf("Absolute Error: %lf\n", absErrorRound);
    printf("Relative Error: %lf\n", relErrorRound);
    printf("Percentage Error: %lf%%\n\n", percentErrorRound);

    double absErrorTrunc = calculateAbsoluteError(trueValue, truncValue);
    double relErrorTrunc = calculateRelativeError(trueValue, truncValue);
    double percentErrorTrunc = calculatePercentageError(trueValue, truncValue);

    printf("Truncation:\n");
    printf("Truncated Value: %lf\n", truncValue);
    printf("Absolute Error: %lf\n", absErrorTrunc);
    printf("Relative Error: %lf\n", relErrorTrunc);
    printf("Percentage Error: %lf%%\n", percentErrorTrunc);

return 0;
}