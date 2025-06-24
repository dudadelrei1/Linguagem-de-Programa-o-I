#include <stdio.h>

int main()
{
    int A,B;
    printf("Insira dois valores A e B: ");
    scanf("%d %d", &A, &B);
    printf("A+B= %d\n", A+B);
    printf("A-B= %d\n", A-B);
    printf("A*B= %d\n", A*B);
    printf("A/B= %d\n", A/B);
    printf("Módulo A em B= %d\n", A%B);
    printf("A++= %d\n", ++A);
    printf("B--= %d\n", --B);
    
    printf("Operadores aritméticos por ordem de precedência\n");
    printf("Insira um terceiro valor: ");
    
    int C; 
    scanf("%d", &C);
    
    printf("A-B/C= %d\n", A-B/C);
    printf("(A-B)/C= %d\n", (A-B)/C);
    printf("A*B/C= %d\n", A*B/C);
    printf("A+B*C= %d\n", A+B*C);
    printf("A*B/C= %d\n", A*B/C);
    printf("(A+B)/C= %d\n", (A+B)/C);
    printf("(A+B)/C-B+5*10)/C= %d",((A+B)/C-B+5*10)/C);
    printf("((A+B)-C)+10= %d\n",((A+B)-C)+10);
    
    return 0;
}