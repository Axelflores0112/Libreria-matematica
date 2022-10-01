include<iostream>
#include<math.h>
#define Pi 3.1416
using namespace std;

class Math {
private:
	int valorAX,valorAY, valorBX, valorBY,valor;
public:
	Math(int,int,int,int,int);
	void operaciones();

};
Math::Math(int _valor, int _valorAX, int _valorAY, int _valorBX, int _valorBY) {
	valorAX = _valorAX;
	valorAY = _valorAY;
	valorBX = _valorBX;
	valorBY = _valorBY;
	valor = _valor;

};
void Math::operaciones() {
	int matrizxdA[50][50], matrizxdB[50][50], matrizxdR[50][50],choice;//matriz
	float Sen,Cos,Tan,radianes;//entidades trogonometricas
	do {
		cout << "Que desea hacer?" << endl;
		cout << "1.Multiplicar matrices" << endl;
		cout << "2.Seno" << endl;
		cout << "3.Coseno " << endl;
		cout << "4.Tangente " << endl;
		cout << "0.salir" << endl;
		cin >> choice;
		switch (choice) {
		case 1:
			cout << "\tPrimera matriz" << endl;
			cout << "Cuanta filas deseas: " << endl;
			cin >> valorAX;
			cout << "Cuanta columnas deseas: " << endl;
			cin >> valorAY;

			for (int i = 0; i < valorAX; i++) {//Definir valores de las matriz
				for (int j = 0; j < valorAY; j++) {
					cout << "Digite los numeros de la matriz: [" << i << "][" << j << "]";
					cin >> matrizxdA[i][j];
				}
				cout << endl;
			}
			//Imprimir la matriz
			for (int i = 0; i < valorAX; i++) {//columnas
				for (int j = 0; j < valorAY; j++) {//filas
					cout << matrizxdA[i][j];
				}
				cout << endl;
			}
			cout << "\tSegunda matriz" << endl;
			cout << "Cuanta filas deseas: " << endl;
			cin >> valorBX;
			cout << "Cuanta columnas deseas: " << endl;
			cin >> valorBY;
			for (int i = 0; i < valorBX; i++) {
				for (int j = 0; j < valorBY; j++) {
					cout << "Digite los numeros de la matriz: [" << i << "][" << j << "]";
					cin >> matrizxdB[i][j];
				}
				cout << endl;
			}
			for (int i = 0; i < valorBX; i++) {//filas
				for (int j = 0; j < valorBY; j++) {//columnas
					cout << matrizxdB[i][j];
				}
				cout << endl;
			}
			if (valorAY == valorBX) {//numero de columas de A tiene que coincidir con B si no pela
			//Multplicacion de Matraices A*B

				for (int i = 0; i < valorAX; i++) {
					for (int j = 0; j < valorBY; j++) {
						matrizxdR[i][j] = 0;
						for (int k = 0; k < valorAY; k++) {
							matrizxdR[i][j] += matrizxdA[i][k] * matrizxdB[k][j];
						}
						cout << endl;
					}
				}
				for (int i = 0; i < valorAX; i++) {
					for (int j = 0; j < valorBY; j++) {
						cout << matrizxdR[i][j] << " ";

					}
					cout << endl;
				}
			}
			else {
				cout << "Nos se puede hacer la multipliacion, el numero de columas (A) no coincide con el numero de filas(B)." << endl;
			}

			break;
		case 2:
			cout << "ingrese el angulo: " << endl;
			cin >> valor;
			radianes = valor * Pi / 180;
			Sen = sin(radianes);
			cout << "el seno es: " << Sen;
			break;
		case 3:
			cout << "ingrese el angulo: " << endl;
			cin >> valor;
			radianes = valor * Pi / 180;
			Cos = cos(radianes);
			cout << "el coseno es: " << Cos<<endl;
			break;
		case 4:
			cout << "ingrese el angulo: " << endl;
			cin >> valor;
			radianes = valor * Pi / 180;
			Tan = tan(radianes);
			cout << "el seno es: " << Tan<<endl;
			break;

		}
		cout << endl;
	} while (choice != 0);
	
	

}
