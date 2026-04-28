#include <stdio.h>

int main() {
    float a, b;
    printf("Enter a number: \n");
    scanf("%f", &a);
    printf(" Print the second number:\n");
    scanf("%f", &b);
    printf(" The numbers are %.1f and %.1f\n", a, b);
    printf("Results; \n");
    printf("%.1f\n", a + b);
    printf("%.1f\n", a - b);
    printf("%.1f\n", a * b);
    printf(" integer division: %d / %d = %d\n", (int)a, (int)b, (int)a / (int)b);
    printf(" integer module %d %% %d = %d\n", (int)a, (int)b, (int)a % (int)b);
    printf(" Float division: %.1f / %.1f = %.1f\n", a, b, a / b);





    return 0;

}