#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    int primeiro, segundo;
    printf(" Insert first number\n");
    scanf("%d", &primeiro);
    printf(" Insert the second number\n");
    scanf("%d", &segundo);
    fflush(stdin);
    if (primeiro > segundo) 
    printf(" The first number is greater than the second\n");
    else if (segundo > primeiro)
    printf(" The second number is greater than the first\n");
     else if (primeiro == segundo)
     printf(" They are equal\n");
    if (primeiro > 0 && segundo > 0)
    printf(" Both are positive\n");
    else if (primeiro < 0 && segundo < 0)
    printf(" Both are negative\n");
    else if (primeiro == 0 || segundo == 0)
    printf(" One of them is zero\n");

    return 0;              

}