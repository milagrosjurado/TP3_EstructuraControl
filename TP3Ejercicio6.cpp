#include <iostream>
using namespace std;

int main() {
	int suma;
	suma= 0;
	
	
	for (int i =1; i<=100; i++) {
		
		if (i %2==0){
			suma = suma+i;
			cout << " " << i << endl;
	}
}
	cout << "La sumatoria es:" << suma << endl;
	
	return 0;
}
