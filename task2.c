#include <stdio.h>

int main() {
    int number;
    float score;
    char letter;
    
    printf("Enter a number: ");
    fflush(stdout);  // Força a imprimir antes de ler
    scanf("%d", &number);
    
    printf("Enter a score: ");
    fflush(stdout);
    scanf("%f", &score);
    
    printf("Enter a letter: ");
    fflush(stdout);
    scanf(" %c", &letter);
    
    printf("\nNumber: %d\nScore: %f\nLetter: %c\n", number, score, letter);
    
    return 0;
}
