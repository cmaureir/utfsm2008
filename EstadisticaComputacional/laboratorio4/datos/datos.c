#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void)
{
	int mediaLight1, mediaLight2, mediaCorriente1, mediaCorriente2, desviacionLight, desviacionCorriente, i;
	FILE *datosLight, *datosCorriente;

	printf("\nCigarros light\n===\n\n");
	printf("\nTiempo promedio 1 [s]: ");
	scanf("%d", &mediaLight1);
	printf("\nTiempo promedio 2 [s]: ");
	scanf("%d", &mediaLight2);
	printf("\nDesviacion estandar [s]: ");
	scanf("%d", &desviacionLight);
	printf("\nCigarros corrientes\n===\n\n");
	printf("\nTiempo promedio 1 [s]: ");
	scanf("%d", &mediaCorriente1);
	printf("\nTiempo promedio 2 [s]: ");
	scanf("%d", &mediaCorriente2);
	printf("\nDesviacion estandar [s]: ");
	scanf("%d", &desviacionCorriente);

	datosLight = fopen("datosLight.txt", "w");
	datosCorriente = fopen("datosCorriente.txt", "w");

	for (i = 0; i < 20; i++)
	{
		fprintf(datosLight, "%d\n", (int)(mediaLight1 + (random() % desviacionLight)*(((int)(pow(i,3)+i) % 3) == 0 ? -1 : 1)));
		fprintf(datosCorriente, "%d\n", (int)(mediaCorriente1 + (random() % desviacionCorriente)*(((int)(pow(i,3)+i) % 3) == 0 ? -1 : 1)));
	}

	for (i = 0; i < 20; i++)
	{
                fprintf(datosLight, "%d\n", (int)(mediaLight2 + (random() % desviacionLight)*(((int)(pow(i,3)+i) % 3) == 0 ? -1 : 1)));
                fprintf(datosCorriente, "%d\n", (int)(mediaCorriente2 + (random() % desviacionCorriente)*(((int)(pow(i,3)+i) % 3) == 0 ? -1 : 1)));
	}

	printf("40 Datos generados con exito!\n");
	fclose(datosLight);
	fclose(datosCorriente);

	return EXIT_SUCCESS;
}

