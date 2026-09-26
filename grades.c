// Grade Averager
// By Haifa Muhammed Zaid

#include <stdio.h>

int main() {
    int n;
    float total = 0, avg;

    printf("How many subjects? ");
    scanf("%d", &n);

    float scores[n];
    for (int i = 0; i < n; i++) {
        printf("Enter score %d: ", i + 1);
        scanf("%f", &scores[i]);
        total += scores[i];
    }

    avg = total / n;
    printf("\nAverage score: %.2f\n", avg);

    if (avg >= 40)
        printf("Result: Pass\n");
    else
        printf("Result: Fail\n");

    return 0;
}