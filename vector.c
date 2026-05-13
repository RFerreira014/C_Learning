/* este programa inicializa um vector de 20 unidades com valores -1.
em seguida, pede que o usuario informe n elementos, para adicionar ao vector.
(n também é lido do teclado). Por fim, solicita um chave de busca e realiza a busca pela chave no vector.
Imprime a posição da primeira ocorrencia da chave.
Criador: Rui Ferreira 13/05/2026*/
#define N 20
#include <stdio.h>
int main() {
    int v[N], i;
    int n; // numero de elementos do usuario
    int posLivre = 0; // primeira posicao livre do vector
    int chave; // elemento a ser buscado

    // inicializa o vector com -1
    for (i = 0; i < N; i++) {
        v[i] = -1;
    }
    printf(" Informe a quantidade de elementos a adicionar ao vector \n");
    scanf("%d", &n);
    printf(" informe os %d elementos. \n", n);
    // Ler n elementos
    for(posLivre=0;posLivre<n;posLivre++){
        scanf("%d", &v[posLivre]);  

    }
printf(" Informe o elemento a ser buscado: ");
scanf("%d", &chave);
int encontrado = -1;

for(i = 0; i < n; i++) {

    if(v[i] == chave) {
        encontrado = i;
        break;
    }
}
if(encontrado != -1) {
    printf("Elemento encontrado na posicao: %d\n", encontrado);
} else {
    printf("Elemento nao encontrado.\n");
}
return 0;   
}
