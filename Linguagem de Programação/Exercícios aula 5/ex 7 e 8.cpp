#import <iostream>
#import <locale.h>
#import <cstdlib>
#import <math.h>
using namespace std;
int main(){
	setlocale(LC_ALL, "Portuguese");
	float area, medidaLado, alturaTriangulo, apotema;
	int lados;
	Repetir:
		system("cls");
		cout << "Digite quantos lados tem o Pol�gono Regular: ";
		cin >> lados;
		cout << "Digite a medida dos lados do Pol�gono Regular: ";
		cin >> medidaLado;
		if(lados == 3){
			alturaTriangulo = sqrt(pow(medidaLado, 2) - pow((medidaLado/2), 2));
			area = (alturaTriangulo * medidaLado) / 2;
			cout << "\n\nFigira Geometrica: Tri�ngulho\n�rea: " << area << "cm\n\n";
		}
		else if(lados == 4){
			area = medidaLado * medidaLado;
			cout << "\n\nFigira Geometrica: Quadrado\n�rea: " << area << "cm\n\n";
		}
		else if(lados == 5){
			apotema = medidaLado / 1.453;
			area = 2.5 * medidaLado * apotema;
			cout << "\n\nFigira Geometrica: Pent�gono\n�rea: " << area << "cm\n\n";
		}
		else if(lados < 3){
			cout << "\n\nN�o � um Pol�gono!\n\n";
			system("pause");
			goto Repetir;
		}
		else{
			cout << "\n\nPol�gono n�o encontrado!\n\n";
			system("pause");
			goto Repetir;
		}
}
