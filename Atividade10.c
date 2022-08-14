#include <stdio.h>
#include <stdlib.h>


/**
 * @author Andre Ferraz
 * @matricula 770830
 * */

/**Fazer um programa para:
- definir e ler um valor real do teclado;
- supor que esse valor represente o raio de uma esfera,
 calcular e mostrar o volume de uma esfera com cinco oitavos do raio.**/

int main() 
{

  float raio;
  float volume;
  
  
  
  
  printf("\n Este programa irá calcular e mostrar o volume de uma esfera com cinco oitavos do raio. ");

    printf("\n Digite o valor do raio de uma esfera ---> ");
    scanf("%f",  &raio);

    
    raio = (raio / 8) * 5;
    raio = (raio * raio) * raio;
    volume = (4 * raio * 3.14) / 3;

  printf("\n o volume da esfera e %.2f", volume);

return 0;
}
