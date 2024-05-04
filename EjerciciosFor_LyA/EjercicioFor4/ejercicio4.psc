Proceso ejercicio4
	// Realice un programa que permita calcular y dar como salida el promedio general de una sección, tomando en cuenta que está compuesta por 10 estudiantes y que se tiene la nota de cada uno de ellos.
	Definir nota, promedio, i Como Real;
	Definir sumaNotas Como Real;
	
	sumaNotas <- 0; // Inicializamos la suma total de notas en cero
	
	Para i <- 1 Hasta 10 Con Paso 1 Hacer;
		Escribir "Ingrese la nota ", i, ": ";
		Leer nota;
		sumaNotas <- sumaNotas + nota;
	FinPara
	
	promedio <- sumaNotas/10;
	
	Escribir "Promedio general del grupo: ", promedio;
	
FinProceso
