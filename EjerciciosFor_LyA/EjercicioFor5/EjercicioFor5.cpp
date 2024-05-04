/*Para un grupo de clase de 8 estudiantes, realice un programa que
permita calcular y dar como salida lo siguiente:
✓ Cantidad de alumnos aprobados
✓ Cantidad de alumnos reprobados
✓ Promedio general del grupo
Nota mínima para aprobar: 70*/

//Ingresamos la libreria
#include <iostream> //iostream nos proporciona funciones de entrada y salida estándar.

using namespace std; //Esta línea indica que se utilizará el espacio de nombres std para acceder a las funciones y clases de la biblioteca estándar de C++. 


//Definimos nuestra funcion principal
int main()
{
    //Declaramos nuestras variables
    int alumnos [8]; // Declramos un arreglo de enteros llamado "alumnos" que contendra 8 elementos, este arreglo almacenara las notas de los alumnos.
    int aprobados = 0, reprobados =0; //En esta linea declaramos dos variables de tipo entero y ambas se inicializan en 0, esta variable va a contar el numero de alumnos aprobados y reprobados.
    int SumaNotas = 0; //En esta linea declaramos la variable suma que se inicializa en 0, esta variable se utilizara para calcular la suma de las notas de los alumnos.

    for (int i = 0; i < 8; i++){ //aca agragamos un bucle For que se va a ejecutar 8 veces.
        cout <<"Ingresa la nota del alumno"<< i+1<< ":"; //i+1 se utiliza para incrementar a cada interaccion del bucle.
        cin >> alumnos[i]; //guardamos la nota del alumno en la posicion que i se encuentre

        SumaNotas += alumnos[i];//aca sumaremos la nota actual a la variable "SumaNotas", que se utilizara para calcular la suma de todas las notas.

        if (alumnos[i] >= 70){ //Agrego una condicion para determinar que alumno aprobo o reprobo
            aprobados++;
        }
        else{
            reprobados++;
        }
    }
//Calculamos el promedio de las notas, utilizando la suma de todas las notas
    double promedio = SumaNotas / 8; 
     cout <<"Alumnos aprobados:"<< aprobados <<endl;
     cout <<"Alumnos reprobados:"<< reprobados <<endl;
     cout<<"Promedio del grupo: "<< promedio << endl;


    return 0;
}

