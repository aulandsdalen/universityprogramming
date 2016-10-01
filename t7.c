#include <stdio.h>
#include <stdlib.h>

long int factorial(int n) {

if (n < 0)
    return 0;
if (n == 0)
    return 1;
else
    return (n * factorial(n-1)); /*to understand recursion you must first understand recursion*/
}

int main()
{
    long int result;
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    result = factorial(n);
    printf("%d! = %ld\n", n, result);
    return 0;
}
