// 191204_hernandez_perez_inversa.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	float arreglo[5][5];
	int c;
	float casc;
	float casf;
	float d1a;
	float d1b;
	float d1c;
	float d2a;
	float d2b;
	float d2c;
	float d3a;
	float d3b;
	float d3c;
	float d4a;
	float d4b;
	float d4c;
	float denominador;
	int f;
	float matrizb[5][5];
	float nominador;
	float r1;
	float r2;
	float r3;
	float r4;
	float respaldo;
	float rt;
	f = 0;
	c = 0;
	for (f = 1; f <= 4; f++) {
		for (c = 1; c <= 4; c++) {
			cout << "fila " << f << " columna " << c << endl;
			cin >> arreglo[f][c];
		}
	}
	cout << "---------------------------------------" << endl;
	// menores 1
	for (f = 1; f <= 4; f++) {
		for (c = 1; c <= 4; c++) {
			cout << arreglo[f][c];
		}
		cout << "  " << endl;
	}
	cout << "   " << endl;
	casf = 1;
	casc = 1;
	do {
		for (f = 1; f <= 4; f++) {
			for (c = 1; c <= 4; c++) {
				if (c != casc && f != casf) {
					cout << arreglo[f][c] << " ";
				}
			}
			cout << "   " << endl;
		}
		casc = casc + 1;
	} while (casc <= 4);
	// menores 2
	cout << "_____________________" << endl;
	cout << " " << endl;
	casf = 2;
	casc = 1;
	do {
		for (f = 1; f <= 4; f++) {
			for (c = 1; c <= 4; c++) {
				if (c != casc && f != casf) {
					cout << arreglo[f][c] << " ";
				}
			}
			cout << "   " << endl;
		}
		casc = casc + 1;
	} while (casc <= 4);
	// menores 3
	cout << "_____________________" << endl;
	cout << " " << endl;
	casf = 3;
	casc = 1;
	do {
		for (f = 1; f <= 4; f++) {
			for (c = 1; c <= 4; c++) {
				if (c != casc && f != casf) {
					cout << arreglo[f][c] << " ";
				}
			}
			cout << "   " << endl;
		}
		casc = casc + 1;
	} while (casc <= 4);
	// menores 4
	cout << "_____________________" << endl;
	cout << " " << endl;
	casf = 4;
	casc = 1;
	do {
		for (f = 1; f <= 4; f++) {
			for (c = 1; c <= 4; c++) {
				if (c != casc && f != casf) {
					cout << arreglo[f][c] << " ";
				}
			}
			cout << "   " << endl;
		}
		casc = casc + 1;
	} while (casc <= 4);
	matrizb[1][1] = 0 + (arreglo[2][2] * ((arreglo[3][3] * arreglo[4][4]) - (arreglo[3][4] * arreglo[4][3])) - arreglo[2][3] * ((arreglo[3][2] * arreglo[4][4]) - (arreglo[3][4] * arreglo[4][2])) + arreglo[2][4] * ((arreglo[3][2] * arreglo[4][3]) - (arreglo[3][3] * arreglo[4][2])));
	cout << "A11=" << matrizb[1][1] << endl;
	matrizb[1][2] = 0 - (arreglo[2][1] * ((arreglo[3][3] * arreglo[4][4]) - (arreglo[3][4] * arreglo[4][3])) - arreglo[2][3] * ((arreglo[3][1] * arreglo[4][4]) - (arreglo[3][4] * arreglo[4][1])) + arreglo[2][4] * ((arreglo[3][1] * arreglo[4][3]) - (arreglo[3][3] * arreglo[4][1])));
	cout << "A12=" << matrizb[1][2] << endl;
	matrizb[1][3] = 0 + (arreglo[2][1] * ((arreglo[3][2] * arreglo[4][4]) - (arreglo[3][4] * arreglo[4][2])) - arreglo[2][2] * ((arreglo[3][1] * arreglo[4][4]) - (arreglo[3][4] * arreglo[4][1])) + arreglo[2][4] * ((arreglo[3][1] * arreglo[4][2]) - (arreglo[3][2] * arreglo[4][1])));
	cout << "A13=" << matrizb[1][3] << endl;
	matrizb[1][4] = 0 - (arreglo[2][1] * ((arreglo[3][2] * arreglo[4][3]) - (arreglo[3][3] * arreglo[4][2])) - arreglo[2][2] * ((arreglo[3][1] * arreglo[4][3]) - (arreglo[3][3] * arreglo[4][1])) + arreglo[2][3] * ((arreglo[3][1] * arreglo[4][2]) - (arreglo[3][2] * arreglo[4][1])));
	cout << "A14=" << matrizb[1][4] << endl;
	matrizb[2][1] = 0 - (arreglo[1][2] * ((arreglo[3][3] * arreglo[4][4]) - (arreglo[3][4] * arreglo[4][3])) - arreglo[1][3] * ((arreglo[3][2] * arreglo[4][4]) - (arreglo[3][4] * arreglo[4][2])) + arreglo[1][4] * ((arreglo[3][2] * arreglo[4][3]) - (arreglo[3][3] * arreglo[4][2])));
	cout << "A21=" << matrizb[2][1] << endl;
	matrizb[2][2] = 0 + (arreglo[1][1] * ((arreglo[3][3] * arreglo[4][4]) - (arreglo[3][4] * arreglo[4][3])) - arreglo[1][3] * ((arreglo[3][1] * arreglo[4][4]) - (arreglo[3][4] * arreglo[4][1])) + arreglo[1][4] * ((arreglo[3][1] * arreglo[4][3]) - (arreglo[3][4] * arreglo[4][1])));
	cout << "A22=" << matrizb[2][2] << endl;
	matrizb[2][3] = 0 - (arreglo[1][1] * ((arreglo[3][2] * arreglo[4][4]) - (arreglo[3][4] * arreglo[4][2])) - arreglo[1][2] * ((arreglo[3][1] * arreglo[4][4]) - (arreglo[3][4] * arreglo[4][1])) + arreglo[1][4] * ((arreglo[3][1] * arreglo[4][2]) - (arreglo[3][2] * arreglo[4][1])));
	cout << "A23=" << matrizb[2][3] << endl;
	matrizb[2][4] = 0 + (arreglo[1][1] * ((arreglo[3][2] * arreglo[4][3]) - (arreglo[3][3] * arreglo[4][2])) - arreglo[1][2] * ((arreglo[3][1] * arreglo[4][3]) - (arreglo[3][3] * arreglo[4][1])) + arreglo[1][3] * ((arreglo[3][1] * arreglo[4][2]) - (arreglo[3][2] * arreglo[4][1])));
	cout << "A24=" << matrizb[2][4] << endl;
	matrizb[3][1] = 0 + (arreglo[1][2] * ((arreglo[2][3] * arreglo[4][4]) - (arreglo[2][4] * arreglo[4][3])) - arreglo[1][3] * ((arreglo[2][2] * arreglo[4][4]) - (arreglo[2][4] * arreglo[4][2])) + arreglo[1][4] * ((arreglo[2][2] * arreglo[4][3]) - (arreglo[2][3] * arreglo[4][2])));
	cout << "A31=" << matrizb[3][1] << endl;
	matrizb[3][2] = 0 - (arreglo[1][1] * ((arreglo[2][3] * arreglo[4][4]) - (arreglo[2][4] * arreglo[4][3])) - arreglo[1][3] * ((arreglo[2][1] * arreglo[4][4]) - (arreglo[2][4] * arreglo[4][1])) + arreglo[1][4] * ((arreglo[2][1] * arreglo[4][3]) - (arreglo[2][3] * arreglo[4][1])));
	cout << "A32=" << matrizb[3][2] << endl;
	matrizb[3][3] = 0 + (arreglo[1][1] * ((arreglo[2][2] * arreglo[4][4]) - (arreglo[2][4] * arreglo[4][2])) - arreglo[1][2] * ((arreglo[2][1] * arreglo[4][4]) - (arreglo[2][4] * arreglo[4][1])) + arreglo[1][4] * ((arreglo[2][1] * arreglo[4][2]) - (arreglo[2][2] * arreglo[4][1])));
	cout << "A33=" << matrizb[3][3] << endl;
	matrizb[3][4] = 0 - (arreglo[1][1] * ((arreglo[2][2] * arreglo[4][3]) - (arreglo[2][3] * arreglo[4][2])) - arreglo[1][2] * ((arreglo[2][1] * arreglo[4][3]) - (arreglo[2][3] * arreglo[4][1])) + arreglo[1][3] * ((arreglo[2][1] * arreglo[4][2]) - (arreglo[2][2] * arreglo[4][1])));
	cout << "A34=" << matrizb[3][4] << endl;
	matrizb[4][1] = 0 - (arreglo[1][2] * ((arreglo[2][3] * arreglo[3][4]) - (arreglo[2][4] * arreglo[3][3])) - arreglo[1][3] * ((arreglo[2][2] * arreglo[3][4]) - (arreglo[2][4] * arreglo[3][2])) + arreglo[1][4] * ((arreglo[2][2] * arreglo[3][3]) - (arreglo[2][3] * arreglo[3][2])));
	cout << "A41=" << matrizb[4][1] << endl;
	matrizb[4][2] = 0 + (arreglo[1][1] * ((arreglo[2][3] * arreglo[3][4]) - (arreglo[2][4] * arreglo[3][3])) - arreglo[1][3] * ((arreglo[2][1] * arreglo[3][4]) - (arreglo[2][4] * arreglo[3][1])) + arreglo[1][4] * ((arreglo[2][1] * arreglo[3][3]) - (arreglo[2][3] * arreglo[3][1])));
	cout << "A42=" << matrizb[4][2] << endl;
	matrizb[4][3] = 0 - (arreglo[1][1] * ((arreglo[2][2] * arreglo[3][4]) - (arreglo[2][4] * arreglo[3][2])) - arreglo[1][2] * ((arreglo[2][1] * arreglo[3][4]) - (arreglo[2][4] * arreglo[3][1])) + arreglo[1][4] * ((arreglo[2][1] * arreglo[3][2]) - (arreglo[2][2] * arreglo[3][1])));
	cout << "A43=" << matrizb[4][3] << endl;
	matrizb[4][4] = 0 + (arreglo[1][1] * ((arreglo[2][2] * arreglo[3][3]) - (arreglo[2][3] * arreglo[3][2])) - arreglo[1][2] * ((arreglo[2][1] * arreglo[3][3]) - (arreglo[2][3] * arreglo[3][1])) + arreglo[1][3] * ((arreglo[2][1] * arreglo[3][2]) - (arreglo[2][2] * arreglo[3][1])));
	cout << "A44=" << matrizb[4][4] << endl;
	cout << "_______________________" << endl;
	cout << "MATRIZ B" << endl;
	cout << " " << endl;
	// escribir arreglo[1,1],"*",matrizB[1,1];
	d1a = arreglo[1][1] * matrizb[1][1];
	// escribir d1a;
	// escribir arreglo[1,2],"*",matrizB[1,2];
	d1b = matrizb[1][2] * arreglo[1][2];
	// escribir d1b;
	// escribir arreglo[1,3],"*",matrizB[1,3];
	d1c = arreglo[1][3] * matrizb[1][3];
	// escribir d1c;
	// escribir arreglo[1,4],"*",matrizB[1,4];
	d2a = arreglo[1][4] * matrizb[1][4];
	// escribir d2a;
	rt = d1a + d1b + d1c + d2a;
	// escribir rt;
	// escribir "________";
	// muestra de la matriz B
	for (f = 1; f <= 4; f++) {
		for (c = 1; c <= 4; c++) {
			cout << matrizb[f][c] << " ";
		}
		cout << "   " << endl;
	}
	cout << "________________________________" << endl;
	cout << "TRANSPUESTA" << endl;
	cout << " " << endl;
	// transpuesta
	respaldo = matrizb[1][2];
	matrizb[1][2] = matrizb[2][1];
	matrizb[2][1] = respaldo;
	respaldo = matrizb[1][3];
	matrizb[1][3] = matrizb[3][1];
	matrizb[3][1] = respaldo;
	respaldo = matrizb[1][4];
	matrizb[1][4] = matrizb[4][1];
	matrizb[4][1] = respaldo;
	respaldo = matrizb[2][3];
	matrizb[2][3] = matrizb[3][2];
	matrizb[3][2] = respaldo;
	respaldo = matrizb[2][4];
	matrizb[2][4] = matrizb[4][2];
	matrizb[4][2] = respaldo;
	respaldo = matrizb[3][4];
	matrizb[3][4] = matrizb[4][3];
	matrizb[4][3] = respaldo;
	for (f = 1; f <= 4; f++) {
		for (c = 1; c <= 4; c++) {
			cout << matrizb[f][c] << " ";
		}
		cout << "   " << endl;
	}
	cout << "____________________________" << endl;
	cout << "   " << endl;
	rt = d1a + d1b + d1c + d2a;
	cout << "determinante de la matriz inicial= " << rt << endl;
	if (rt != 0) {
		cout << "______________________" << endl;
		cout << "MATRIZ INVERZA" << endl;
		cout << " " << endl;
		denominador = rt;
		for (f = 1; f <= 4; f++) {
			for (c = 1; c <= 4; c++) {
				nominador = 1 * matrizb[f][c];
				denominador = denominador * 1;
				// Escribir nominador,"/",denominador;
				if (denominador == 1 || nominador == 0) {
					cout << nominador * 1 << " ";
				}
				else {
					if (denominador < 0 || nominador < 0) {
						denominador = 0 - denominador;
						nominador = 0 - nominador;
						if (denominador == 1) {
							cout << nominador * 1 << " ";
						}
						else {
							if (nominador == 0) {
								cout << nominador * 1 << " ";
							}
							else {
								cout << nominador << "/" << denominador << " ";
							}
						}
					}
				}
				nominador = 0;
				denominador = rt;
			}
			cout << "   " << endl;
		}
	}
	else {
		cout << "error,division por 0" << endl;
	}
	return 0;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
