#include <iostream>
#include <locale.h>
#include <cstdlib>
using namespace std;
int main(){
    setlocale(LC_ALL, "Portuguese");
    char sexo;
    string msg;
    cout << "Digite seu sexo (F/M): ";
    cin >> sexo;
    if(sexo == 'f' || sexo == 'F')
        msg = "Voc� � uma mulher!";
    else if(sexo != 'f' && sexo != 'F' && sexo != 'm' && sexo != 'M')
        cout << "Sexo inv�lido!";
    else
        msg = "Voc� � um homem!";
    cout << msg << "\n\n";
    system("pause");
}
