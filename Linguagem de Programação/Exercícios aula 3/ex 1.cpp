#include <iostream>
#include <locale.h>
#include <math.h>
#include <stdlib.h>
using namespace std;
int main(){
    setlocale(LC_ALL, "Portuguese");
    Repetir:
    system("cls");
    float N, R, P;
    cout << "Digite um n�mero: ";
    cin >> N;
    R = sqrt(N);
    P = pow(N, 3);
    if(N >= 7)
         cout << "\nO valor de R � " << R << "\nO valor de P � " << P << "\n\n";
    else
        cout << "Voc� digitou um n�mero menor do que 7\n\n";
    system("pause");
    goto Repetir;
}
