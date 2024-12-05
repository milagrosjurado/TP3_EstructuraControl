#include <iostream>
using namespace std;

int main() {
	int suma, impar;
	suma= 0;
	impar= 0;
	
	for (int i =1; i<=300; i++) {
		
		if (i %2 !=0){
			suma = suma+i; 		//sumo los impares
			impar++;              //cuento los impares
	}
}
	cout << "Cantidad de impares:" << impar << endl;
	cout << "La sumatoria es:" << suma << endl;
	
	return 0;
}
