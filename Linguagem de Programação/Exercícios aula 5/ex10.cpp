#include <iostream>
#include <locale.h>
#include <cstdlib>
using namespace std;
int main(){
	setlocale(LC_ALL, "Portuguese");
	int ang1, ang2, ang3, aux;
	string msg;
	Repetir:
		system("cls");
		cout << "Digite o 1� �ngulo do tri�ngulo: ";
		cin >> ang1;
		cout << "Digite o 2� �ngulo do tri�ngulo: ";
		cin >> ang2;
		cout << "Digite o 3� �ngulo do tri�ngulo: ";
		cin >> ang3;
		aux = ang1 + ang2 + ang3;
		if(aux != 180){
			system("cls");
			cout << "A soma dos �ngulos informados � diferente de 180, entretanto n�o representa um tri�ngulo!\n\n";
			system("pause");
			goto Repetir;
		}
		else if(ang1 == 90 || ang2 == 90 || ang3 == 90)
			msg = "TRI�NGULO RET�NGULO!";
		else if(ang1 > 90 || ang2 > 90 || ang3 > 90)
			msg = "TRI�NGULO OBSTUS�NGULO!";
		else 
			msg = "TRI�NGULO ACUT�NGULO!";
		cout << msg << "\n\n";
		system("pause");
	goto Repetir;
}
