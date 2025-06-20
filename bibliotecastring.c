#include <stdio.h>
#include  <stdlib.h>
#include <ctype.h> 
#include <string.h>

int main()
{
    //Declaração de variáveis
    char c; 
    char b[4] = "123";
    char a[4] = "0.5";
    scanf("%c", &c); 
    
    //Funções biblioteca ctype.h
    if (isdigit(c)) {
        printf("É um dígito!\n");
    }
    if (isalpha(c)) {
        printf("É uma letra!\n");
    }
    if (isalnum(c)) {
        printf("É alfanumérico!\n");
    }
    if (isspace(c)) {
        printf("É um espaço!\n");
    }
    if (islower(c)) {
        printf("É minúscula!\n");
        c = toupper(c);  
        printf("Maiúscula: %c\n", c);
    }else{
    if (isupper(c)) {
        printf("É maiúscula!\n");
        c = tolower(c);  
        printf("Minúscula: %c\n", c);
    }}
    
    //Funções atoi e atof que transformam string em números
    int numero = atoi(b); 
    printf("%d\n", numero); 
    float number = atof(a); 
    printf("%f\n", number);
    
    //Funções biblioteca string.h
    int numero1 = strlen(b); 
    printf("Tamanho da string b: %d\n", numero1);
    int numero2 = strcmp(b,a);
    printf("As strings b e c são iguais? %d\n", numero2);
    strcat(b,a);
    printf("União de b e c: ");
    puts(b);
    int numero3 = strlen(b);
    printf("Tamanho de b pós união: %d\n", numero3);
    strcpy(b,a);
    printf("Cópia do conteúdo de b para c: ");
    puts(b); 
    
    return 0;
    
}

