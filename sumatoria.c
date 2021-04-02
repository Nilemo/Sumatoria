#include <stdio.h>


//structs

struct Datos
{
	int i;
	int n;
	float base;	
};

//declaracion de funciones

float calculoSumatoria(struct Datos Sumatoria);



//main 

void main()
{
	struct Datos Sumatoria;
	float resultado;

	printf("A continuaccion se le pediran los datos de la sumatoria");
	printf("Ingrese el valor del indice, si no le da un valor, se asumira que es 0");
	scanf("%d", Sumatoria.i);
	printf("Ingrese el valor de n, si no le da un valor, se asumira que es 0");
	scanf("%d", Sumatoria.n);
	printf("Ingrese el valor de la base, si no le da un valor, se asumira que es 0");
	scanf("%f", Sumatoria.base);
	
	resultado=calculoSumatoria(Sumatoria);
	
	printf("el resultado es : %.2f.", resultado);
	
	return 0;
}


//funciones

float calculoSumatoria(struct Datos Sumatoria)
{
	int i;
	int n;
	float base;
	float resultado=0;

	i=Sumatoria.i;
	n=Sumatoria.n;
	base=Sumatoria.base;
	
	do
	{
		resultado=resultado+(i*base);
		i++;

	}while(i<n);

	return resultado;
}
