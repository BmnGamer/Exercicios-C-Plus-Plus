#include <iostream>
#include <locale.h>
#include <stdlib.h>
using namespace std;
int main(){
	setlocale(LC_ALL, "Portuguese");
	float altura, base, area;
	cout << "Digite a base do tri�ngulo: ";
	cin >> base;
	cout << "Digite altura do tri�ngulo: ";
	cin >> altura;
	area = base * altura/2;
	cout << "A �rea do tri�ngulo � igual a " << area << "\n\n";
	system("pause");
}
