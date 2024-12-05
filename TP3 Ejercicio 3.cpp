#include <iostream>
using namespace std;

int main() {
	double  num, resultado1, resultado2;
	cout << "Ingrese un numero:";
	cin >> num;
	
	resultado1 = num/2;
	resultado2 = resultado1;
	while (resultado1 > 0.01){
		resultado2 = resultado1/2;
		cout << "El resultado de la division es:"<< resultado1 << endl;
			resultado1 = resultado2;
		
	}
	
	return 0;
}
