#include <iostream>
using namespace std;

int main() {
	int num1, cantidad, par, impar;
	par= 0;
	impar =0;
	cout << "Ingrese cantidad de numeos enteros:";
	cin >> cantidad;
	
	for (int i =0; i<cantidad; i++) {
		cout << "Ingrese numero:" << i+1 <<endl;
		cin >> num1;
		
		if (num1 %2==0){
			par++;
		} else {
			impar++;
		}
	}
	cout << "Numeros pares:" << par << endl;
	cout << "Numeros impares:" << impar;
	
	return 0;
}
