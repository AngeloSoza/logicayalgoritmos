Algoritmo ejercicio5
	
    Definir aprobados, reprobados, promedio, nota, contador Como Real;
    Definir sumaNotas Como Real;
    aprobados <- 0;  
    reprobados <- 0;  
    sumaNotas <- 0; 
    
    Para contador <- 1 Hasta 8 Con Paso 1 Hacer
        Escribir "Ingrese la nota del estudiante ", contador, ":";
        Leer nota;
        sumaNotas <- sumaNotas + nota;  
        Si nota >= 70 Entonces
            aprobados <- aprobados + 1;  
        Sino
            reprobados <- reprobados + 1; 
        FinSi
    FinPara
    
    promedio <- sumaNotas / 8;
    
    Escribir "Cantidad de alumnos aprobados: ", aprobados;
    Escribir "Cantidad de alumnos reprobados: ", reprobados;
    Escribir "Promedio general del grupo: ", promedio;
    
FinAlgoritmo

