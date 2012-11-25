#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// by gzamora

//Segun esteban era mejor dejar 3 preguntas y segun lo minimo que piden en el pdf del lab:
//Quedaran las preguntas:
//1) A que edad se inici� sexualmente - Cuanti
//2) Cuantas horas le dedica a los medios de comunicacion al dia? - Cuanti
//3) Que tipo de programas de tv prefiere ver (3)  - Cuali


//char *genero[] = {"Masculino", "Femenino"};
int edades[] = {13,14,15,15,15,16,16,17,18,18,19,20,21,22,23,24,25};
//char *ciudad[] = {"Quilpue", "Viña del Mar", "Valparaiso", "Reñaca", "Con Con", "Villa Alemana"};
//char *unis[] = {"PUCV", "UV", "Inacap", "DUOC", "Universidad del mar", "UVM", "UPLA", "Santo Tomas", "Andres Bello"};
//char *coles[] = {"Industrial de Valparaiso", "Manheim", "Salesiano", "Seminario San Rafael", "Liceo Tecnico Femenino", "Mackay", "Andres Bello", "Comercial de Viña del Mar", "Maritimo"};
//char *diario[] = {"LUN", "EL mercurio valpo", "La cuarta", "La tercera", "La estrella"};
//char *canal[] = {"Canal 13", "Red", "TVN", "Mega", "CHV"};
//char *progras[] = {"Yingo", "Yingo", "Yingo", "Yingo", "Yingo", "Yingo", "Salvese Quien Pueda", "Amor Ciego", "Asi Somos", "Pollo en Conserva", "La Ofis", "Pasiones", "Morandé con Compañia", "Morandé con Compañia", "Morandé con Compañia", "Morandé con Compañia", "Caiga Quien Caiga", "Mire Quien Habla", "Alfombra Roja", "Los Simpsons", "Hijos del Monte", "Don Amor", "Lola", "Caso Cerrado", "La Jueza", "Veredicto", "Los Venegas", "La Liga", "Informe Especial", "El Diario de Eva", "El Diario de Eva", "El Diario de Eva", "Mala Conducta", "Contacto"};

char *progras[] = {"Juveniles", "Juveniles", "Juveniles", "Culturales", "Telenovelas", "Telenovelas", "Ayuda Social", "Entretencion", "Deportivos", "Adultos", "Adultos", "Adultos"};
int horas[] = {0,1,2,3,4,5,6, 7, 8};

int main(void)
{
	int i = 0, edad, edad_sexual;
	char progra[100], progra2[100], progra3[100];

	for (i = 0; i < 100; i++)
	{
		printf("\nEncuestado %d\n\n", i+1);
		//printf("Genero: %s\n", genero[random() % 2]);
		//edad = edades[random() % 13];
		//printf("Edad: %d\n", edad);
		//printf("Sector: %s\n", ciudad[random() % 6]);
		//if (edad < 18)
		//	printf( "Colegio: %s\n", coles[random() % 9]);
		//else
		//	printf("Universidad: %s\n", unis[random() % 9]);
		//do
		//{
			edad_sexual = edades[random() % 13];
		//} while(edad_sexual > edad);
		printf("Edad iniciacion sexual: %d\n", edad_sexual);

		//printf("Diario: %s\n", diario[random() % 5]);

		//printf("Canal: %s\n", canal[random() % 5]);
		
		//printf("Hora ver tv: %li:00\n", ((random() % 12) + 12));

		printf("Horas de tv: %d\n", horas[random() % 9]);

		strcpy(progra, progras[random() % 12]);

		printf("Tipo programa: %s\n", progra);

		//do
		//{
		//strcpy(progra2, progras[random() % 12]);
		//} while(!strcmp(progra, progra2));

		//printf("Tipo programa2: %s\n", progra2);

		//do
		//{
		//strcpy(progra3, progras[random() % 12]);
		//} while(!strcmp(progra3, progra) || !strcmp(progra3, progra2));

		//printf("Tipo programa3: %s\n", progra3);

	}

	return 0;

}
