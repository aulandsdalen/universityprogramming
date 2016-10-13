#include <stdio.h>

int main (int argc, char **argv)
{
	int x, x2, x4, x8, x16, x3, x5, x21, x10, x13, x17, x12, x28;
	printf("x: ");
	scanf("%d", &x);

	// a
	x2 = x*x; // 1
	x4 = x2 * x2; //2
	x8 = x4 * x4; //3
	x16 = x8 * x8; //4
	x21 = x16 * x4 * x; //5,6
	printf("1. x^21 = %d\n", x21);

	// b
	x2 = x * x;
	x3 = x2 * x;
	x5 = x3 * x2;
	x10 = x5 * x5;
	printf("2. x^3 = %d\nx^10 = %d\n", x3, x10);

	// c
	x2 = x * x;
	x3 = x * x2;
	x5 = x3 * x2;
	x13 = x5 * x5 * x3;
	printf("3. x^5 = %d\nx13 = %d\n", x5, x13);

	// d
	x2 = x * x;
	x3 = x2 * x;
	x5 = x2 * x3;
	x17 = x5 * x5 * x5 * x2;
	printf("4. x^2 = %d\nx^5 = %d\nx^17 = %d\n", x2, x5, x17);

	// e
	x2 = x * x;
	x4 = x2 * x2;
	x12 = x4 * x4 * x4;
	x28 = x12 * x12 * x4;
	printf("5. x^4 = %d\nx^12 = %d\nx^28 = %d\n", x4, x12, x28);

	return 0;
}
