#include <iostream> // Importa a biblioteca iostream.

using namespace std;
	float x;
	
main() {
	system("chcp 65001"); // Define conjunto de caracteres como o conjunto português brasileiro.
	cout << "Tabuada" << "\n\n";
	cout << "Informe o número base: ";
	cin >> x;

	cout << "\n" << x << " * " << "0" << " = " << x * 0;
	cout << "\n" << x << " * " << "1" << " = " << x * 1;
	cout << "\n" << x << " * " << "2" << " = " << x * 2;
	cout << "\n" << x << " * " << "3" << " = " << x * 3;
	cout << "\n" << x << " * " << "4" << " = " << x * 4;
	cout << "\n" << x << " * " << "5" << " = " << x * 5;
	cout << "\n" << x << " * " << "6" << " = " << x * 6;
	cout << "\n" << x << " * " << "7" << " = " << x * 7;
	cout << "\n" << x << " * " << "8" << " = " << x * 8;
	cout << "\n" << x << " * " << "9" << " = " << x * 9;
	cout << "\n" << x << " * " << "10" << " = " << x * 10;
}