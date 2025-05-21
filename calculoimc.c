#include <stdio.h>

int main()
{
    float peso = .0, altura = .0, imc = .0;
    
    printf("Entre com o seu peso: ");
    scanf("%f", &peso);
    
    printf("Entre com sua altura em metros: ");
    scanf("%f", &altura);
    
    imc = peso/(altura*altura);
    
    printf("Seu peso = %3.2f e sua altura = %3.2f\n", peso, altura);
    printf("Seu IMC = %3.2f\n", imc);
    
    if(imc < 18.5){
        printf("Magreza\n");
    }else if (imc >= 18.5 && imc <= 24.9){
        printf("Normal\n");
    } else if(imc >= 25 && imc <= 29.9 ){
        printf("Sobrepeso\n");
    } else if(imc >= 30 && imc <= 39.9){
        printf("Obesidade");
    } else {
        printf("Obesidade grave");
    }
    
    return 0;
}