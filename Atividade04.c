#include <stdio.h>
#include <stdlib.h>


/**
 * @author Andre Ferraz
 * @matricula 770830
 * */

/** Fazer um programa para:
- definir e ler dois valores inteiros do teclado;
- supor que esses dois valores representem lados de um retângulo,
 calcular e mostrar a área e o perímetro de um retângulo com a metade do tamanho dos lados.**/

int main() 
{

  float lado1;
  float lado2;
  float area;
  float perimetro;
  
  
  
  printf("\n Este programa irá calcular e mostrar a área e o perímetro de um retângulo com a metade do tamanho dos lados.");
    
    printf("\n Digite o valor do primeiro lado ---> ");
    scanf("%f", &lado1);

  printf("\n Digite o valor do segundo lado ---> ");
    scanf("%f", &lado2);

  lado1 = lado1/2;
  lado2 = lado2/2;
  area = lado1 * lado2;
  perimetro = (lado1 * 2) + (lado2 * 2);
  

    
    
  printf("\n A area do retangulo eh %.2f e o perimetro e %.2f", area,perimetro);

  printf("\n Programa Finalizado!");

return 0;
}
