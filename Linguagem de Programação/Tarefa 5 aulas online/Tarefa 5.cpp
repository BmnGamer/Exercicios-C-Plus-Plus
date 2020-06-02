#include <iostream>
#include <math.h>
#include <locale.h>
#include <conio.h>
#include <stdio.h>
using namespace std;
double n1, n2, n3, media;
void menu();
float lerN1();
float lerN2();
float lerN3();
float calcMedia(float a, float b, float c);
void exibir(float n1, float n2, float n3, float m);


int main(){
	setlocale(LC_ALL, "Portuguese");
	menu();
}

void menu(){
	char opt;
	Menu:
		system("cls");
		cout << "---------------M E N U---------------\n\n1) Ler valores\n2) Calcular M�dia\n3) Exibir tudo\n4) Sair\n\n";
		opt = getch();
		switch(opt){
			case '1':
				system("cls");
				n1 = lerN1();
				n2 = lerN2();
				n3 = lerN3();
				break;
			case '2':
				system("cls");
				media = calcMedia(n1, n2, n3);
				cout << "M�DIA CALCULADA\n\n";
				system("pause");
				break;
			case '3':
				system("cls");
				exibir(n1, n2, n3, media);
				system("pause");
				break;
			case '4':
				exit(0);
			default:
				goto Menu;
		}
	goto Menu;
}

float lerN1(){
	cout << "Digite a 1� nota: ";
	cin >> n1;
	return n1;
}

float lerN2(){
	cout << "Digite a 2� nota: ";
	cin >> n2;
	return n2;
}

float lerN3(){
	cout << "Digite a 3� nota: ";
	cin >> n3;
	return n3;
}

float calcMedia(float a, float b, float c){
	return float(pow((a*b*c), 1.0/3));
}

void exibir(float n1, float n2, float n3, float m){
//	cout << "A m�dia entre as notas: " << n1 << ", " << n2 << " e " << n3 << " � igual a " << float(m) << "\n\n";
	printf("A m�dia entre as notas: %.1f, %.1f e %.1f � igual a %.1f\n\n", n1, n2, n3, m);
}
