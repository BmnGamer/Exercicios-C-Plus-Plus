#include <iostream>
#include <cstdlib>
#include <locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL, "Portuguese");
	int nasc, permissao;
	Repetir:
	cout << "Digite o seu ano de nascimento: ";
	cin >> nasc;
	permissao = 2020 - nasc;
	if(permissao >= 16)
		cout << "Voc� tem permiss�o para votar!\n\n";
	else 
		cout << "Voc� n�o tem permiss�o para votar!\n\n";
	system("pause");
	goto Repetir;
}
