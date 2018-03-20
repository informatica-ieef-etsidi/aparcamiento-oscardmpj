#include <stdio.h>
#include <string.h>

void main() {
	int plaza1 = 0, plaza2 = 0, salir = 0;
	char opcion, matricula1[8], matricula2[8], abandonar, matriculax[8];

	while (salir == 0) {

		printf("Menu del aparcamiento\n");
		printf("Elige R si quieres reservar\n");
		printf("Elige A si quieres abandonar tu plaza\n");
		printf("Elige E si quieres saber el estado del aparcamiento\n");
		printf("Elige B si quieres buscar tu vehiculo\n");
		printf("Elige S si quieres salir del menu\n");
		scanf_s("%c", &opcion);
		getchar();
		system("cls");


		switch (opcion) {
		case 'R': //para reservar una plaza
		case 'r':
			if (plaza1 == 0 && plaza2 == 0) {
				printf("Introduzca su matricula: %s\n", matricula1);
				scanf_s("%s", &matricula1, 8);
				plaza1 = 1;
				getchar();
				system("cls");
			}
			else if (plaza1 == 1 && plaza2 == 0) {
				printf("Introduzca su matricula: %s\n", matricula2);
				scanf_s("%s", &matricula2, 8);
				plaza2 = 1;
				getchar();
				system("cls");
			}
			else  (plaza1 == 1 && plaza2 == 1); {
				printf("Lo sentimos, las 2 plazas ya estan ocupadas. Vuelva en otro momento\n");
				system("cls");
			}
			break;

		case 'A':
		case 'a':
			if (plaza1 == 0 && plaza2 == 0) {
				printf("No hay ninguna de las dos plazas ocupadas\n");
				system("cls");
			}
			else {
				printf("Selecciona su coche para poder abandonar la plaza\n");
				scanf_s("%d", &abandonar);
			}

			switch (abandonar) {
			case '1':
				printf("Usted ha seleccionado la primera plaza, que pase un buen dia\n");
				system("cls");
				break;
			case '2':
				printf("Usted ha selccionado la segunda plaza, que pase un buen dia\n");
				system("cls");
				break;

			default:
				printf("La opcion no esta disponible, lo sentimos\n");
				getchar();
				system("cls");
			}

		case 'E':
		case 'e':
			if (plaza1 == 0 && plaza2 == 0) {
				printf("Las dos plazas estan vacias\n");
			}
			else if (plaza1 == 1 && plaza2 == 0) {
				printf("La primera plaza esta ocupada, pero la segunda esta libre\n");
			}
			else if (plaza1 == 0 && plaza2 == 1) {
				printf("La segunda plaza esta ocupada, pero la primera esta libre\n");
			}
			getchar();
			system("cls");
			break;

		case 'B': 
		case 'b':
			if (plaza1 == 1 || plaza2 == 1) {
				printf("Por favor, introduzca el numero de matricula de su vehiculo\n");
				scanf_s("%s", matriculax);
				if (strcmp(matriculax, matricula1) == 0) {
					printf("La matricula %s pertenece al vehiculo que se situa en la plaza1\n", matricula1);
				}
				else if (strcmp(matriculax, matricula2) == 0) {
					printf("La matricula %s pertenece al vehiculo que se situa en la plaza2\n", matricula2);
				}

			}
			else {
				printf("Las plazas estan vacias en este momento, vuelva al menu y selecciones otra opcion\n");
			}
			break;

		case 'S':
		case 's':
			printf("Gracias por visitar nuestra web, vuelva pronto\n");
			salir = 1;
			break;

		default:
			printf("Ninguna de las opciones esta disponible\n");
			getchar();
			system("cls");




		}

	}
	system("pause");

}


