#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int n1=0, n2=0, n3=0, n4=0, n5=0, n6=0;
    int s1, s2, s3, s4, s5, s6;
    int acertos = 0, tentativas = 0;

void digito();
int analise();
void sorteio(); 
int tries();
 

int main() {
    digito();
    analise();
    sorteio();
    tries();
    return 0;
}

void digito(){
    printf("Digite 6 números de 1 a 60: ");
    scanf("%d %d %d %d %d %d", &n1, &n2, &n3, &n4, &n5, &n6);
}

int analise(){
     if (n1 > 60 || n2 > 60 || n3 > 60 || n4 > 60 || n5 > 60 || n6 > 60 || 
        n1 < 1 || n2 < 1 || n3 < 1 || n4 < 1 || n5 < 1 || n6 < 1) {
        printf("Valor inválido\n");
        return 1;
    }
}

void sorteio(){
    srand(time(NULL));
    
     do {
        do { s1 = (rand() % 60) + 1; } while (s1 == 0);
        do { s2 = (rand() % 60) + 1; } while (s2 == s1);
        do { s3 = (rand() % 60) + 1; } while (s3 == s1 || s3 == s2);
        do { s4 = (rand() % 60) + 1; } while (s4 == s1 || s4 == s2 || s4 == s3);
        do { s5 = (rand() % 60) + 1; } while (s5 == s1 || s5 == s2 || s5 == s3 || s5 == s4);
        do { s6 = (rand() % 60) + 1; } while (s6 == s1 || s6 == s2 || s6 == s3 || s6 == s4 || s6 == s5);
        
         acertos = 0;

        if (n1 == s1 || n1 == s2 || n1 == s3 || n1 == s4 || n1 == s5 || n1 == s6){acertos++;}
        if (n2 == s1 || n2 == s2 || n2 == s3 || n2 == s4 || n2 == s5 || n2 == s6){acertos++;}
        if (n3 == s1 || n3 == s2 || n3 == s3 || n3 == s4 || n3 == s5 || n3 == s6){acertos++;}
        if (n4 == s1 || n4 == s2 || n4 == s3 || n4 == s4 || n4 == s5 || n4 == s6){acertos++;}
        if (n5 == s1 || n5 == s2 || n5 == s3 || n5 == s4 || n5 == s5 || n5 == s6){acertos++;}
        if (n6 == s1 || n6 == s2 || n6 == s3 || n6 == s4 || n6 == s5 || n6 == s6){acertos++;}

        tentativas++;

        printf("Tentativa %d: %d acertos\n", tentativas, acertos);

    } while (acertos < 6);

}

int tries(){
    printf("Parabens! Voce acertou os 6 numeros em %d tentativas.\n", tentativas);
}