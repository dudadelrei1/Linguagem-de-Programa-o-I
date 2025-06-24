#include <stdio.h>

int main()
{
    //inicialização
    int var1 = 0;
    float var2 = 0;
    double var3 = 0;
    
    //Tamanho de cada tipo básico em bytes
    printf("Variável inteira em bytes: %li\n", sizeof(var1));
    printf("Variável float em bytes: %li\n", sizeof(var2));
    printf("Variável double em bytes: %li\n\n", sizeof(var3));
    
    //declaração de variáveis
    var1 = 10;
    var2 = 10.1;
    var3 = 110.33;
    
    //cálculos sem ordem de precedência
    double resp1 = var1 + var2; 
    double resp2 = var3 - var2;
    double resp3 = var1*var3;
    double resp4 = var1/var2;
    
    printf("resp1: %f\nresp2:%f\nresp3:%f\nresp4:%f\n\n", resp1, resp2, resp3, resp4);
    
    //cálculos com ordem de precedência
    resp1 = (var1 + var2)*var3; 
    resp2 = var1 + var2*var3;
    resp3 = (var3 - var1)/var2;
    
    printf("resp1: %f\nresp2: %f\nresp3: %f\n",resp1, resp2, resp3);
    
    return 0; 
}
