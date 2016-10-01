#include <stdio.h>
/*http://pastebin.com/DR3EeAbN*/

int power(int base, int exponent) {

int i, result;
result = 1;
if (exponent == 0)
    return 1;
else if (exponent == 1)
    return base;
for(i = 0; i < exponent; i++) {
    result *= base;
}
return result; /*we could also use recursion, but nevermind - this task makes use of 'for' loop as was stated in task*/

}

int main(int argc, char** argv)
{
    printf("2^3 = %d, 3^2 = %d, 10^1 = %d, 5^0 = %d\n", power(2, 3), power(3, 2), power(10, 1), power(5, 0));
    /* if int power(int base, int exponent) is correct, this should print 2^3 = 8, 3^2 = 9, 10^1 = 10, 5^0 = 1*/
    return 0;
}
