#include <stdio.h>

int main()
{
     //Bytes de cada modificador 
     printf("int: %ld bytes\n", sizeof(int));
     printf("float: %ld bytes\n", sizeof(float)); 
     printf("double: %ld bytes\n", sizeof(double));
     printf("long double: %ld bytes\n", sizeof(long double)); 
     printf("char: %ld bytes\n", sizeof(char));
     printf("short int: %ld bytes\n", sizeof(short int));
     printf("long int: %ld bytes\n", sizeof(long int));
     printf("unsigned int: %ld bytes\n", sizeof(unsigned int));
     printf("signed int: %ld bytes\n", sizeof(signed int ));
     printf("short unsigned int: %ld bytes\n", sizeof(short unsigned int));
     printf("short signed int: %ld bytes\n", sizeof(short signed int));
     printf("long unsigned int: %ld bytes\n", sizeof(long unsigned int));
     printf("long signed int: %ld bytes\n\n", sizeof(long signed int));
     
     //Valores máximos e mínimos 
     //int
     int valormax1 = 2147483648;
     int valormin1 = -2147483648;
     //short int
     short int valormax2 = 32768;
     short int valormin2 = -32768;
     //long int
     long int valormax3 = 9223372036854775807;
     long int valormin3 = -9223372036854775808;
     //signed int 
     signed int valormax4 = 2147483648;
     signed int valormin4 = -2147483648;
     //unsigned int
     unsigned int valormax5 = 4294967295;
     //short signed int
     short signed int valormax6 = 32768;
     short signed int valormin6 = -32768;
     //long unsigned int
     long unsigned int valormax7 = 18446744073709551615;
     //long signed int
     long signed int valormax8 = 9223372036854775808;
     long signed int valormin8 = -9223372036854775808; 
     //short unsigned int 
     short unsigned int valormax9 = 65535;
     //float 
     float valormax10 = 3.4028235e+380;
     float valormin10 = 1.175494351e-380;
     //double 
     double valormax11 = 2.2250738585072014e+308;
     double valormin11 = 2.2250738585072014e-308;
     //long double 
     long double valormax12 = 3.4028236692093846346337460743177e+380;
     long double valormin12 = -3.4028236692093846346337460743177e+380;
     
     //Valor máximo +1 ou valor mínimo -1 
         valormax1++; 
         valormin1--;
         valormax2++;
         valormin2--;
         valormax3++;
         valormin3--;
         valormax4++;
         valormin4--;
         valormax5++;
         valormax6++;
         valormin6--;
         valormax7++;
         valormax8++;
         valormin8--;
         valormax9++;
         valormax10++;
         valormin10--;
         valormax11++;
         valormin11--;
         valormax12++;
         valormin12--;
         
     //Testes para verificar erro
     printf("Max int: %d\n", valormax1);
     printf("Min int: %d\n", valormin1);
     printf("Max short int: %d\n", valormax2);
     printf("Min short int: %d\n", valormin2);
     printf("Max long int: %ld\n", valormax3);
     printf("Min long int: %ld\n", valormin3);
     printf("Max signed int: %d\n", valormax4);
     printf("Min signed int: %d\n", valormin4);
     printf("Max unsigned int: %u\n", valormax5);
     printf("Max short signed int: %d\n", valormax6);
     printf("Min short signed int: %d\n", valormin6);
     printf("Max long unsigned int: %lu\n", valormax7);
     printf("Max long signed int: %ld\n", valormax8);
     printf("Min long signed int: %ld\n", valormin8);
     printf("Max short unsigned int: %d\n", valormax9);
     printf("Max float: %f\n", valormax10);
     printf("Min float: %f\n", valormin10);
     printf("Max double: %lf\n", valormax11);
     printf("Min double: %lf\n", valormin11);
     printf("Max long double: %Lf\n", valormax12);
     printf("Min long double: %Lf\n", valormin12);
     
    return 0;
}