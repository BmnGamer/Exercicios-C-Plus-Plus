#import <iostream>
#import <locale.h>
#import <stdlib.h>
using namespace std;
int main(){
	setlocale(LC_ALL, "Portuguese");
	int num, modulo;
	Repita:
		system("cls");
		cout << "Digite um n�mero: ";
		cin >> num;
		if(num < 0)
			modulo = num * (-1);
		else
			modulo = num;
		cout << "O m�dulo de " << num << " � igual a " << modulo << "\n\n";
		system("pause");
	goto Repita;
}
