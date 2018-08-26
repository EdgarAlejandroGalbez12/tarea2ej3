 /*Escriba un programa que calcule el precio del boleto de ida y vuelta en ferrocarriles, conociendo la distancia
del viaje de ida y el tiempo de estancia. El precio por kilómetro es de $0.17. Se sabe además que si el número de
días de estancia es superior a 7 y la distancia total (ida y vuelta) a recorrer es superior a 800 Km. el boleto tiene
un descuento del 30%.*/
#include <iostream>
using namespace std;
int main ()
{
	float distancia, precio, dias;
	cout << "*****OJO SOLO VENDEMOS BOLETOS DE IDA Y VUELTA***** \n";
	cout << "ingrese la distancia que va a viajar en ferrocarril \n";
	cin >> distancia;
	cout << "ingrese los dias que se va a quedar \n";
	cin >> dias;
	distancia*=2;
	precio=distancia*0.17;
	if (distancia>800 && dias>7)
	{
		cout << "*****FELICIDADES***** \n" << "su boleto tiene 30 % de descuento \n";
		precio-=precio*.30;		
 		cout << "el total a pagar es $" << precio <<" pesos";
 	}
	else
	cout << "el total a pagar es $" << precio <<" pesos";
	return 0;
}
