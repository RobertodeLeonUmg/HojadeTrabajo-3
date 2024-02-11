//Roberto Carlos de León Gramajo. 5090-23-1762.
//Hoja de Trabajo.
#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <fstream>
#include <string.h>

using namespace std;
//Establecemos todo un sistema de procedimiento sin retorno, que únicamente nos realicen todo el procedimiento que se codifica, algunos procedimientos tiene categorías para los valores introducidos, es en todas las operaciones aritmeticas, que se numeraron del num-num9, así ahorrando el introducir de una en una, y mejor realizar todo el procedimiento con solo dos valores.
void suma(float num, float num1);
void resta(float num2, float num3);
void multiplicacion(float num4, float num5);
void division(float num6, float num7);
void Comparacion(float num8, float num9);
void OperacionesyVariables();
void CalcularPotencia();
void Numpar();
void anioBisiesto();
void Numiguales();
int instrucciones();

int main() {
    int seleccion;
//son 4 opciones que tenemos para realizar un procedimiento sin retorno, mientras una 5ta no utilizamos un procedimiento más que solo el imprimir en pantalla que el programa sale del procedimiento para finalizar el programa.
    do {
        system("cls");
        seleccion = instrucciones();
        switch (seleccion) {
            case 1:
                OperacionesyVariables();
                break;
            case 2:
                CalcularPotencia();
                break;
            case 3:
                Numpar();
                break;
            case 4:
                anioBisiesto();
                break;
            case 5:
                cout << "Salida del programa." << endl;
                break;
            default:
                cout << "Opcion no encontada. Intenta de nuevo." << endl;
        }
//Utilizamos un do while, para imprimir un mensaje en pantalla aún cuando se cumpla los estandares establecidos, así se llamara a pantalla el mensaje de salir del programa.
    } while (seleccion != 5);
    return 0;
}
//Establecemos un menú independinete, pero que tenga como condición que sea un procedimiento con retorno, gracias a que el valor que este tenga, trandra que ser publico o necesario para nuestro procedimiento central, así utilizando toda respuesta que este nos indique.
int instrucciones() {
    int eleccion;
    cout <<"\t" << "//Hoja de trabajo#1\\" << endl;
    cout << "Seleccione una opcion para iniciar con el trabajo:" << endl;
    cout << " 1. Operaciones y Varaibles" << endl;
    cout << " 2. Potencia de un numero" << endl;
    cout << " 3. Numeros pares" << endl;
    cout << " 4. Anio Bisiesto" << endl;
    cout << " 5. Salir del progama" << endl;
    cout << endl;
    cout << "Escoge una opcion: ";
    cin >> eleccion;
    return eleccion;
}
//establecemos un procedimiento sin retorno, utilizando valores centrales como son "Valor 1" y "Valor 2", los cuales nos ayudaran a con los procedimientos sin retorno, todo procedimiento tiene el nombre de la operación aritmetica, y se realizada una tras otra, gracais a que cada procedimiento necesita unicamente 2 valores que el usuario ingrese.
void OperacionesyVariables() { 
	system("cls");
	float valor1 = 0, resultado = 0, valor2 = 0;
    cout <<"\tOperaciones aritmeticas"<< endl;
	cout <<"Ingrese el primer numero"<< endl;
    cin>> valor1;
    cout <<"Ingrese el segundo numero"<< endl;
    cin>> valor2;
    suma(valor1, valor2);
    resta(valor1, valor2);
    multiplicacion(valor1, valor2);
    division(valor1, valor2);
    Comparacion(valor1, valor2);
    
    system("pause");
}
void suma(float num, float num1) {
    float resultado = 0;
    cout <<"\n\n#Suma"<< endl;
    resultado = (num + num1);
    cout << "Nuestra suma es: " << resultado << endl;
}

void resta(float num2, float num3) {
    float resultado = 0;
    cout <<"\n\n#Resta"<< endl;
    resultado = (num2 - num3);
    cout << "Nuestra resta es: " << resultado << endl;
}

void multiplicacion(float num4, float num5) {
    float resultado = 0;
    cout <<"\n\n#Multiplicacion"<< endl;
    resultado = (num4 * num5);
    cout << "Nuestra multiplicacion: " << resultado << endl;
}

void division(float num6, float num7) {
    float resultado = 0;
    cout <<"\n\n#Division"<< endl;
    if (num7 != 0) {
        resultado = (num6 / num7);
        cout << "Nuestra division es: " << resultado << endl;
    } else {
        cout << "No se puede dividir por cero." << endl;
    }
}
//Utilizamos operadores logicos, como lo es la comparación entre dos valores, para saber si exiate uno que sea más grande que el otro, o si algún numero sea menor, existe la posibilidad que sean iguales.
void Comparacion(float num8, float num9) {
 
    if(num8==num9)

	cout<<"\n Los dos numeros son iguales";

	else{

	if(num8>num9)

		cout<<"\n - El numero mayor es:"<<num8<<"\n";

	else

		cout<<"\n - El numero menor es:"<<num8<<"\n";

	}

}
//Calculamos potencias, o es decir un numero multiplizado por si mismo cuantas veces se desee, lo que se hace en este caso no es multiplicarlo variabeces, sino utilizar el comando "pow", que nos da la posibilidad de poner un numero base, y las veces que se quiere potenciar
void CalcularPotencia() {
    system("cls");
    double numero, potencia, elevado;
    cout <<"\tPotencias"<< endl;
	cout <<"Ingrese el numero base"<< endl;
    cin>> numero;
    cout <<"Ingrese el exponente del numero"<< endl;
    cin>> potencia;
    elevado = pow(numero, potencia);
    cout << "El numero " << numero << " con la potencia "<< potencia << " tiene un rasultado de: " << elevado << endl;
    system("pause");
}
//porque hacemos que el número ingresado sea multiplicado por %, y no es una multiplicación, sino estamos diciendo que el número será dividido por 4, y si su residuo es igual a 0, este tendra como respuesta, que el año si es bisiestro, mientras su resultado no sea igual a 0, no será tomado como año bisiesto.
void anioBisiesto() {
    system("cls");
	int bisiesto;
	cout <<"\n\t" << "//Ingrese un ano para verificar si es bisiesto\\";
	cout <<"\n\n" << "Ingrese el ano : ";
    cin >> bisiesto;
    if(bisiesto%4==0){
        cout<<"******El anio "<<bisiesto<<" 'Si' es bisiesto"<< endl;
    }
    else{
        cout<<"******El anio "<<bisiesto<<" 'No' es bisiesto"<< endl;
    }
    system("pause");
}
//como utilizamos la division para encontrar el año bisiesto, de igual manera utilizaremos un comando del lenguaje C, para identificar si un número es par, gracias a que su división debe de dar un residuo de 0, si es así, dara la respuesta, que si es un número par.
void Numpar() { 
	system("cls");
	int num;
    cout <<"\n\n\t" << "//Se ingresara un numero, que sera verificado si es o no es par\\";
    cout <<"\n" << "Ingrese un numero: ";
    cin >> num;
    if (num % 2 == 0) {
        cout<< "*******El numero ingresado " << num  <<" 'Si' es par." << endl;
    } else {
        cout << "******El numero ingresado " << num  <<" 'No' es par." << endl;
    }
    system("pause");
}

