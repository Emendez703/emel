#include <iostream>
#include <string>
using namespace std;
//declaramos prototipos de funciones 
void menu();
int suma();
int resta();
int multi();
int division();
void pausa();

int main()
{
	menu();
	return 0;
}
//creamos funciones
void menu()
{
	bool bandera = false;
	char tecla;
	do
	{
		system("cls");
		cin.clear();
		cout << "calcular con funciones" << endl;
		cout << "----------------------" << endl;
		cout << "\t1 .- sumar" << endl;
		cout << "\t2 .- restar" << endl;
		cout << "\t3 .- multiplicar" << endl;
		cout << "\t4 .- dividir" << endl;
		cout << "\t5 .- salir" << endl;
		cout << "elige una opcion" << endl;
		cin >> tecla;
		switch (tecla)
		{
		case '1':
			system("cls");
			suma();
			break;
		case '2':
			system("cls");
			resta();
			break;

		case '3':
			system("cls");
			multi();
			break;

		case '4':
			system("cls");
			division();
			break;

		case '5':
			system("cls");
			pausa();
			break;
		default:
			system; ("cls");
			cout << "opcion no valida" << endl;
			pausa();
			break;







		}
	} while (bandera != true);

}
void pausa()
{
	cout << endl << " pausa cualquier tecla para continuar ...";
	getwchar();
	getwchar();


}
int main()
{
	int a, b, suma;
	cout << "primer valor";
	cin >> a;
	cout << "segundo valor";
	cin >> b;
	suma = a + b;
	cout << "la suma es:" << suma;
	pausa();
	return 0;

}