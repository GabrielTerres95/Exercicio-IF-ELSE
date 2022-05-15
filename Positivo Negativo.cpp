#include <stdio.h>
#include <conio.h>
main()
{
int numero;
printf("Entre com um numero inteiro: ");
scanf("%d",&numero);
if (numero == 0)
printf("ZERO\n");
else
if (numero > 0)
printf("POSITIVO\n");
else
printf("NEGATIVO\n");
getche();
}
