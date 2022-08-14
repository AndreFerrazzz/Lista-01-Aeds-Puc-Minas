#include <stdio.h>
#define M_PI  3.141592653589793




/**
 * @author Andre Ferraz
 * @matricula 770830
 * */

/** Fazer um programa para:
- definir e ler um valor real do teclado;
- supor que esse valor represente o raio de um círculo,
 calcular e mostrar a área de um círculo com um quarto do raio.**/

int main() 
{

  float raio;
  float area;
  
  
  
  
  
  printf("\n Este programa irá calcular e mostrar a area de um circulo com um quarto do raio");

    printf("\n Digite o valor do raio de um circulo ---> ");
    scanf("%f",  &raio);

    
    raio = raio/4;
    area = M_PI * (raio * raio);

  printf("\n o raio do circulo eh %.2f", area);

  

return 0;
}
