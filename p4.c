// MATHEUS CLEBER SILVA GUERRA
// 11721ECP009

#include <stdio.h>

int main ()
{	int num1[256], x=0, y, z=0;
	char num[256];

	printf("Digite um numero: ");
	scanf("%s", num);
		
	for(x=0; num[x] != '\0'; x++)
	{	if(num[x] >= 48 && num[x] <= 57)
		{	num1[z] = num[x] - 48;
			z++;	}
			}
	 y=0;	printf("Valor retornado = ");
	do{	printf("%d", num1[y]);
		y++; }while(y<z);
	return 0;
}