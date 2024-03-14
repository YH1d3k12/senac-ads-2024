/*
	FUP que leia 2 números inteiros ecalcule a soma dos números e imprima o resultado.
*/
#include <iostream> // Importa a biblioteca iostream.
#include <conio.h>
using namespace std;
	int operation;
	float x, y, result;

int sum() {
	cout << "Adição de dois números" << "\n\n";
	cout << "Informe o valor de x: ";
	cin >>  x;
	
	cout << "Informe o valor de y: ";
	cin >> y;
	
	result = x + y;
	
	cout << "\n\n";
	cout << "Resultado: " << x << " + " << y << " = " << result;	
	
	return result;
}

int subtraction() {
	cout << "Subtração de dois números" << "\n\n";
	cout << "Informe o valor de x: ";
	cin >>  x;
	
	cout << "Informe o valor de y: ";
	cin >> y;
	
	result = x - y;
	
	cout << "\n\n";
	cout << "Resultado: " << x << " - " << y << " = " << result;	
	
	return result;
}

int multiply() {
	cout << "Multiplicação de dois números" << "\n\n";
	cout << "Informe o valor de x: ";
	cin >>  x;
	
	cout << "Informe o valor de y: ";
	cin >> y;
	
	result = x * y;
	
	cout << "\n\n";
	cout << "Resultado: " << x << " * " << y << " = " << result;	
	
	return result;
}

int division() {
	cout << "Divisão de dois números" << "\n\n";
	cout << "Informe o valor de x: ";
	cin >>  x;
	
	cout << "Informe o valor de y: ";
	cin >> y;
	
	result = x / y;
	
	cout << "\n\n";
	cout << "Resultado: " << x << " / " << y << " = " << result;	
	
	return result;
}

void mathTable() {
	cout << "Tabuada" << "\n\n";
	cout << "Informe o número base: ";
	cin >> x;
	
	cout << "Informe o tamanho da tabuada: ";
	cin >> y;
	
	cout << "\n";
	for (int j = 0; j <= y; j++) {
		cout << "\n" << x << " * " << j << " = " << x * j;
	}
}

void pressEnter() {
	cout << "\n\n" << "Aperte ENTER para continuar:";
	getch();
}

main() {
	system("chcp 65001"); // Define conjunto de caracteres como o conjunto português brasileiro.

	do {
		system("cls");
		cout << "\n" << "Escolha uma opção a seguir:";
		cout << "\n" << "[1] Adição";
		cout << "\n" << "[2] Subtração";
		cout << "\n" << "[3] Multiplicação";
		cout << "\n" << "[4] Divisão";
		cout << "\n" << "[5] Tabuada";
		cout << "\n" << "[7] Encerrar" << "\n";
		cin >> operation;
		
		switch (operation) {
			case 1:	{
				system("cls");
				sum();
				pressEnter();
				break;
			};
			case 2:	{
				system("cls");
				subtraction();
				pressEnter();
				break;
			};
			case 3:	{
				system("cls");
				multiply();
				pressEnter();
				break;
			};
			case 4:	{
				system("cls");
				division();
				pressEnter();
				break;
			};
			case 5:	{
				system("cls");
				mathTable();
				pressEnter();
				break;
			};
		};
		
	} while (operation != 7);
}