#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
    int q, i;
    double sum, average;
    printf("Number of numbers: ");
    scanf("%d", &q);
    if (q < 1)
        return 1; //otherwise we'll get a division by zero
    double *num = malloc(sizeof(double)*q);
    for (i = 0; i < q; i++) {
        printf("%d> ", i+1);
        scanf("%lf", &num[i]);
    }
    sum = 0;
    /* calculate sum of numbers in array */
    for(i = 0; i < q; i++) {
        sum += num[i];
    }
    average = sum / q;
    printf("Average is %lf\n", average);
    free(num);
    return 0;
}
