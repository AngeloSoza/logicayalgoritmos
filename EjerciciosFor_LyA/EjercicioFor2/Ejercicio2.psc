Proceso ejercicio_2
	//Desarrollar un programa que imprima los números impares en orden descendente que hay entre 1 y 100.
	Definir numeroImpar Como Entero;//Definir variables
	numeroImpar <- 100;//aqui ya damos valor a la variable que es lo que pide el ejercicio
	Mientras numeroImpar >= 1 Hacer//usamos el bucle mientras que seguira ejecutando cuando el valor sea mayor o igual a 1
		Si numeroImpar %2 <> 0 Entonces//aqui si el numero impar dividido por 2 queda en un residuo diferente a 0 entonces es impar pero, si el residuo queda en 0 entonces es par
			Escribir numeroImpar;//aqui se lee el numero impar
		FinSi
		numeroImpar <- numeroImpar - 1;//aqui tomamos el valor actual y solo le restamos 1 almacenando el nuevo valor
	FinMientras
FinProceso
