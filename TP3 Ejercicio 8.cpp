#include <iostream>
using namespace std;

int main() {
	int x, resultado;
	resultado = 1;
	
	cout << "Ingrese un valor:" << x <<endl;
	cin >> x;
	
	for (int i=1; i<=5; i++){
		resultado = resultado*x;
	}
	cout << "Elevado a la quinta es igual a:" << resultado <<endl;
	
	return 0;
}
