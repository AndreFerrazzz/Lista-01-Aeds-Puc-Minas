#include <stdio.h>
#include <stdlib.h>


/**
 * @author Andre Ferraz
 * @matricula 770830
 * */

/**Fazer um programa (Exemplo0115) para:
- definir e ler dois valores reais do teclado;
- supor que esses dois valores representem base e altura de um triângulo,
 calcular e mostrar a área de um triângulo com um terço da altura do mesmo**/


int main() 
{

  int base;
  float altura;
  float area;
  
  
  printf("\n Este programa irá calcular e mostrar a área de um triângulo com um terço da altura do mesmo ");

    printf("\n Digite o valor da base---> ");
    scanf("%d", &base);

    printf("\n Digite o valor da altura---> ");
    scanf("%f", &altura);
  
     altura = altura/3;
     area = base * altura;
     


  printf("\n o terço da altura e %f", area);

return 0;
}
