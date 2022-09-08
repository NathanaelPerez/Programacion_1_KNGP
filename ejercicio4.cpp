//Ejercicio 4 lea la entrada de los datos de una persona con entradas erroneas.

#include <iostream>

using namespace std;

int main ()
{
  float alturametros;
  int edad;
  char sexo[10];

  cout << "Ingrese la edad de la persona: \n";
  cin >> edad;

  cout << "\nIngrese el sexo de la persona: \n";
  cin >> sexo;

  cout << "\nIngrese la altura en metros de la persona: \n";
  cin >> alturametros;

  cout << "\nLa edad de la persona es: "<< edad<<" anos"<<"."<<endl;
  cout << "\nEl sexo de la persona es: "<< sexo<<"."<<endl;
  cout << "\nLa altura en metros de la persona es: "<< alturametros<<" m"<<"."<<endl;

  cout << "\nLos datos de la persona son: "<< edad<< " anos"<<" su sexo es "<<sexo<<" su altura en metros es "<< alturametros<<" m"<<"."<<endl;

 return 0;
}