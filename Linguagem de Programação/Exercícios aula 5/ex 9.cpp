#import <iostream>
#import <locale.h>
#import <cstdlib>
using namespace std;
int main(){
	setlocale(LC_ALL, "Portuguese");
	int n1, n2, n3, aux;
	Repetir:
		system("cls");
		cout << "Digite um n�mero: ";
		cin >> n1;
		cout << "Digite outro n�mero: ";
		cin >> n2;
		cout << "Digite mais um n�mero: ";
		cin >> n3;
		if(n1 == n2 || n1 == n3 || n2 == n3){
			cout << "N�meros repetidos!\n\n";
			system("pause");
			goto Repetir;
		}
		else if(n1 > n2 && n1 > n3)
			aux = n1;
		else if(n2 > n1 && n2 > n3)
			aux = n2;
		else
			aux = n3;
		cout << "O maior valor digitado foi " << aux << "\n\n";
		system("pause");
	goto Repetir;
}
