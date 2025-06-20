#include <stdio.h>
#include <string.h>


// Bubble sort de strings
void comparacaostring(char nomes[100][1000], int n) {
    char troca[1000];
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (strcmp(nomes[j], nomes[j + 1]) > 0) {
                strcpy(troca, nomes[j]);
                strcpy(nomes[j], nomes[j + 1]);
                strcpy(nomes[j + 1], troca);
            }
        }
    }
}

// Bubble sort de caracteres
void comparacaoch(char vetor[], int tamanho) {
    char troca;
    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = 0; j < tamanho - 1 - i; j++) {
            if (vetor[j] > vetor[j + 1]) {
                troca = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = troca;
            }
        }
    }
}

int main() {
    int numero;
    char nomefamilia[100][1000];

    // Ordenação de strings
    printf("Quantas pessoas tem sua família? "); 
    scanf("%d", &numero);
    while (getchar() != '\n'); // limpa o buffer

    printf("Digite os nomes:\n");
    for(int i = 0; i < numero; i++) {
        fgets(nomefamilia[i], sizeof(nomefamilia[i]), stdin);
        nomefamilia[i][strcspn(nomefamilia[i], "\n")] = '\0';//limpa o buffer
    }

    comparacaostring(nomefamilia, numero);

    printf("\nNomes em ordem alfabética:\n");
    for(int i = 0; i < numero; i++) {
        puts(nomefamilia[i]);
    }

    // Ordenação de caracteres
    int quant;
    char ch[1000];

    printf("\nQuantos caracteres deseja digitar? ");
    scanf("%d", &quant);
    while (getchar() != '\n'); // limpa o buffer

    printf("Digite os caracteres (sem espaços): ");
    fgets(ch, quant + 1, stdin); // +1 para incluir o '\0'

    comparacaoch(ch, strlen(ch)); // usamos strlen porque fgets para ao '\n'

    printf("\nCaracteres em ordem alfabética:\n");
    for(int i = 0; i < strlen(ch); i++) {
        printf("%c ", ch[i]);
    }

    return 0;
}


