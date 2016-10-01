#include <stdio.h>
#include <math.h>

/*http://pastebin.com/2VSXqNXA*/

typedef int bool;
enum {false, true};

struct solutions {
bool has_solutions;
bool has_one_solution;
float x1;
float x2;
};

struct solutions solve_quadratic_eqn(int a, int b, int c) {
struct solutions Solutions;
float D = pow(b, 2) - 4*a*c;
if (D<0)
    Solutions.has_solutions = false;
else if (D == 0) {
    Solutions.has_solutions = true;
    Solutions.has_one_solution = true;
    Solutions.x1 = -b/(2*a);
}
else {
    Solutions.has_solutions = true;
    Solutions.has_one_solution = false;
    Solutions.x1 = (-b-sqrtf(D))/(2*a);
    Solutions.x2 = (-b+sqrtf(D))/(2*a);
}
return Solutions;
}

int main(int argc, char** argv)
{
    int a, b, c;
    struct solutions Solutions;
    printf("Enter a, b, c: ");
    scanf("%d, %d, %d", &a, &b, &c);
    printf("%dx^2+%dx+%d = 0\n", a, b, c);
    Solutions = solve_quadratic_eqn(a, b, c);
    if (!Solutions.has_solutions)
        printf("No real solutions!");
    else if (Solutions.has_one_solution) {
        printf("There's only solution, x = %f\n", Solutions.x1);
    }
    else {
        printf("x1 = %f\nx2=%f\n", Solutions.x1, Solutions.x2);
    }
    return 0;
}
