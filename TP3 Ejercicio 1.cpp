#include <iostream>
using namespace std;

int main() {
	int aprobados, reprobados, nota;
	aprobados =0;
	reprobados=0;

	for (int f=1; f<=10; f++) {
		cout << "Ingrese nota del alumno:" << f << endl;
		cin >> nota;
		
	if (nota >=7) {
	aprobados++;
	}else {
	reprobados++;
	}
	}
	cout << "Aprobados:" << aprobados << endl;
	cout << "Reprobados:" << reprobados << endl;
	
	return 0;
}
