#include <stdio.h>
#include <stdlib.h>


/**
 * @author Andre Ferraz
 * @matricula 770830
 * */

/** Fazer um programa (Exemplo0112) para:
- definir e ler um valor inteiro do teclado;
- supor que esse valor represente o lado de um quadrado,
 calcular e mostrar a área e o perímetro de um quadrado com o dobro do tamanho do lado.**/


int main() 
{

  int lado;
  int perimetro;
  float area;

    printf("\n Este programa irá calcular e mostrar a área e o perímetro de um quadrado com o dobro do tamanho do lado.");

  printf("\n Digite o valor do Lado do quadrado---> ");
  scanf("%i", &lado);

  lado = lado * 2;

  perimetro = lado * 4;

  area = lado * lado;

  printf("\n A Area sera igual a %.2f, e o perimetro a %i", area,perimetro);
  
printf("\n Fim do Programa!");
  
  return 0;
}
