/*
	"Iteracion"
	"Juan Manuel Bottarelli Frei"
	"

*/
#include <iostream>

using namespace std;

int main() {
	
	char palabra [144];
	int a, b;
	
	cout << "El siguiente programa muestra un ejemplo de un sistema 'Iterativo Estructurado'" << endl << endl;
	cout << "Ingrese la palabra que desee repetir" << endl;
	cin >> palabra;
	cout << "Ingrese el numero de veces que desea repetir la palabra ingresada" << endl;
	cin >> a;
	
	for(b=0; b<a; b++)
	{
		cout << palabra << endl;
	}
	
    return 0;

}
