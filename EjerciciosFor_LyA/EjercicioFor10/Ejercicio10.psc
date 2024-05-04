Algoritmo Ejercicio10
    Definir matriz como entero;
    Definir filas, columnas, i, j como entero;
	
    Escribir "Ingrese el número de filas de la matriz:";
    Leer filas;
    Escribir "Ingrese el número de columnas de la matriz:";
    Leer columnas;
	
    Para i <- 1 Hasta filas Hacer
        Para j <- 1 Hasta columnas Hacer
            Escribir "Ingrese el elemento (", i, ",", j, "):";
            Leer matriz;
        FinPara
    FinPara
	
    Escribir "Matriz original:";
    Para i <- 1 Hasta filas Hacer
        Para j <- 1 Hasta columnas Hacer
            Escribir matriz;
            Si j < columnas Entonces
                Escribir " ";
            FinSi
        FinPara
        Escribir "";
    FinPara
	
    Escribir "Matriz transpuesta:";
    Para i <- 1 Hasta columnas Hacer
        Para j <- 1 Hasta filas Hacer
            Escribir matriz;
            Si j < filas Entonces
                Escribir " ";
            FinSi
        FinPara
        Escribir "";
    FinPara
FinAlgoritmo
