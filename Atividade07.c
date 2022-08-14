#include <stdio.h>
#include <stdlib.h>


/**
 * @author Andre Ferraz
 * @matricula 770830
 * */

/**Fazer um programa para:
- definir e ler um valor real do teclado;
- supor que esse valor represente a medida de lados de um cubo,
 calcular e mostrar o volume do sólido com um quarto da medida do lado.**/


int main() 
{

  int lado1;
  int lado2;
  int area;
  float perimetro;
  
  
  
  printf("\n Este programa irá calcular e mostrar a área e o perímetro de um retângulo com a metade do tamanho dos lados.");
    
    printf("\n Digite o valor do primeiro lado ---> ");
    scanf("%d", &lado1);

  printf("\n Digite o valor do segundo lado ---> ");
    scanf("%d", &lado2);

  area = lado1 * lado2;
  perimetro = (lado1 * 2) + (lado2 * 2);
  

    
    
  printf("\n A area do retangulo e %d e o perimetro e %d", area,perimetro);

  printf("\n Programa Finalizado!");

return 0;
}
