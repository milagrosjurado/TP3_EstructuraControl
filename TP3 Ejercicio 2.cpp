#include <iostream>
using namespace std;

int main() {
	double num, suma, promedio, mayor, menor;
	suma =0;
	mayor =0;
	menor =1000;

	for (int f=1; f<=10; f++) {
		cout << "Ingrese el valor:" << f << endl;
		cin >> num;
		suma =+ suma+num;
		
			
	if (num >=mayor) {
	mayor= num;
	}
	if (num <= menor) {
	menor =num;
	}
	}
	
	promedio= suma /10;
	cout << "Suma:" << suma << endl;
	cout << "Mayor:" << mayor << endl;
	cout << "Menor:" << menor << endl;
	cout << "Promedio." << promedio << endl;
	
	return 0;
}
