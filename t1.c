#include <stdio.h>

int main(int argc, char** argv)
{
int n;
printf("Enter your number: ");
scanf("%d", &n);
if(n == 0)
    n = 10;
else if (n > 0)
    n *= 2;
else
    n -= 3;
printf("Result is %d\n", n);
return 0;
}
