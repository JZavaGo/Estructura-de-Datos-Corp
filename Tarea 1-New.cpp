#include "stdafx.h"
#include <iostream>

using namespace std;

int media(int arr[], int size) {

	int num = 0;
	int media;

	for (int i = 0; i < size; i++) {
		num += arr[i];
	}
	media = num / size;
	cout << media << endl;
	return 0;
}

int suma(int a, int b) {
	cout << a + b << endl;
	return 0;
}



int palabras(string word1, string word2) {

	int x = word2.length();
	int y = word1.length();
	int cant = 0;

	size_t found;

	for (int i = 0; i < x; i++) {
		found = word2.find(word1, i);
		if (found != std::string::npos) {
			cant += 1;
		}
	}

	cout << "Palabra 1 encontrada " << cant << " veces en palabra 2" << endl;

	return 0;
}


int main()
{
	string palab1 = "on";
	string palab2 = "longhorn";

	int arr[] = { 3,10,5 };

	int num1 = 4;
	int	num2 = 5;

	int opc = 90;
	while (opc != 0) {

		media(arr, 3);

		suma(num1, num2);

		palabras(palab1, palab2);

		cout << "Escriba ""0"" para salir" << endl;
		cin >> opc;
	}

	return 0;
}