#include <iostream>
#include <locale.h>
#include <cstdlib>
using namespace std;
int main(){
	setlocale(LC_ALL, "Portuguese");
	int n1, n2, n3, aux1, aux2, aux3;
	Repetir:
		system("cls");
		cout << "Digite um n�mero: ";
		cin >> n1;
		cout << "Digite outro n�mero: ";
		cin >> n2;
		cout << "Digite mais um n�mero: ";
		cin >> n3;
		if(n1 == n2 || n1 == n3 || n2 == n3){
			cout << "Favor digitar n�meros diferentes!\n\n";
			system("pause");
			goto Repetir;
		}
		else if(n1 < n2 && n1 < n3){
			aux1 = n1;
			if(n2 < n3){
				aux2 = n2;
				aux3 = n3;
			}
			else{
				aux2 = n3;
				aux3 = n2;
			}
		}
		else if(n2 < n1 && n2 < n3){
			aux1 = n2;
			if(n1 < n3){
				aux2 = n1;
				aux3 = n3;
			}
			else{
				aux2 = n3;
				aux3 = n1;
			}
		}
		else{
			aux1 = n3;
			if(n1 < n2){
				aux2 = n1;
				aux3 = n2;
			}
			else{
				aux2 = n2;
				aux3 = n1;
			}
		}
		cout << "A ordem crescente dos n�meros digitados � " << aux1 << " " << aux2 << " " << aux3 << "\n\n";
		system("pause");
	goto Repetir;
}
