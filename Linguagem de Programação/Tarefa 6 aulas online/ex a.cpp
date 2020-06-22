#include <iostream> //incluindo biblioteca de entrada e sa�da
#include <cstdlib> //incluindo biblioteca de comandos do sistema
#include <math.h> //incluindo biblioteca de opera��es matem�ticas
#include <iomanip> //incluindo biblioteca de formata��o de sa�da
using namespace std; 

//Declara��o de Sub-rotinas
double ler_A ( ); //declarando fun��o ler_A
double ler_B ( ); //declarando fun��o ler_B
double ler_C ( ); //declarando fun��o ler_C
double cal_Delta ( double a, double b, double c); //declarando fun��o cal_Delta
double cal_x1 ( double a, double b, double delta ); //declarando fun��o cal_x1
double cal_x2 ( double a, double b, double delta ); //declarando fun��o cal_x2
void exibir ( double a, double b, double c, double delta ); //declarando fun��o exibir

//Fun��o principal
int main () {
  setlocale(LC_ALL, "Portuguese"); //formatando sa�da para portugu�s
  double a, b, c, delta; //declarando variaveis do tipo double
  int tecla; //declando uma vari�vel do tip� int
  MENU:  /* marca um ponto no c�digo para retornar aqui depois*/ 
  	system("cls"); //comando para limpar tela
  	cout << "MENU\n1 Executar\n2 Finalizar\nitem: "; //menu
    cin >> tecla; //solicitando vari�vel para o usu�rio digitar
    switch(tecla){
      case 1:
      	system("cls"); //limpando tela
        a = ler_A ( ); //atribuindo o valor de uma fun��o para uma vari�vel
        b = ler_B ( ); //atribuindo o valor de uma fun��o para uma vari�vel
        c = ler_C ( ); //atribuindo o valor de uma fun��o para uma vari�vel
        
        //verificando de a � igual a 0
        if ( a == 0 ){
          cout << "\nErro!'A' deve ser diferente de zero!"; // imprimindo (Erro!'A' deve ser diferente de zero!) na tela
		  //system("sleep 3"); Comando de linux (programa d� um pause de 3 segundos)
          exit(0); //finalizando programa
        } //finalizando if
        
        //caso a seja diferente de 0
        else {
          delta = cal_Delta ( a, b, c ); //atribuindo o valor de uma fun��o para uma vari�vel
          exibir ( a, b, c, delta ); //chamando procedimento exibir
          system("pause"); //pausando programa
        } //finalizando else         
        break; //pulando para o fim do switch
      case 2:
        cout << "\nO programa ser� finalizado!\n\n"; //exibir na tela (O programa ser� finalizado!)
        system ("pause"); //pausando
        exit ( 0 ); //finalizando
        break; //pulando para o fim do switch
    } //finalizando switch
    goto MENU; //voltando para MENU:
     /* executa novamente a partir do ponto marcado */
    return 0; //retornando valor
}  /* ?m do programa 4 */

//Fun��o para ler o valor de A
double ler_A ( ){ 
  double va; //criando vari�vel local
  cout << "Valor de A: "; //exibir (Valor de A: )
  cin >> va; //solicitando um valor para vari�vel atrav�s do teclado
  return va; //retornando valor digitado 
} //finalizando fun��o

//Fun��o para ler o valor de B
double ler_B ( ) {
  double vb; //criando vari�vel local
  cout << "Valor de B: "; //exibir (Valor de B: )
  cin >> vb; //solicitando um valor para vari�vel atrav�s do teclado
  return vb; //retornando valor digitado 
} //finalizando fun��o

//Fun��o para ler o valor de C
double ler_C ( ) {
  double vc; //criando vari�vel local
  cout << "Valor de C: "; //exibir (Valor de C: )
  cin >> vc; //solicitando um valor para vari�vel atrav�s do teclado
  return vc; //retornando valor digitado 
} //finalizando fun��o

//Fun��o para calcular o valor de Delta
double cal_Delta ( double a, double b, double c){
  double d = pow(b,2) - 4 * a * c; //atribuindo valor para vari�vel d atrav�s de uma opera��o matematica
  return d; //retornando vari�vel d
} //finalizando fun��o

//Fun��o para calcular a primeira raiz da equa��o
double cal_x1 ( double a, double b, double delta ) {
  double x = (-b + sqrt(delta))/(2*a); //atribuindo valor para a vari�vel atrav�s de uma opera��o matematica
  return x; //retornando vari�vel
} //finalizando fun��o

//Fun��o para calcular a segunda raiz da equa��o
double cal_x2 ( double a, double b, double delta ) {
  double x = (-b - sqrt(delta))/(2*a); //atribuindo valor para a vari�vel atrav�s de uma opera��o matematica
  return x; //retornando vari�vel
} //finalizando fun��o

//Procedimento para exibir todos os valores na tela
void exibir ( double a, double b, double c, double delta ) {
  system("cls"); //limpando tela
  cout << fixed;
  cout << "Valor de ....A: " << setfill(' ') << setw(15) << setprecision(2) << a; //imprimindo valor de A
  cout << "\nValor de ....B: " << setfill(' ') << setw(15) << setprecision(2) << b; //imprimindo valor de B
  cout << "\nValor de ....C: " << setfill(' ') << setw(15) << setprecision(2) << c; //imprimindo valor de C
  cout << "\nValor de Delta: " << setfill(' ') << setw(15) << setprecision(2) << delta; //imprimindo valor de delta

//verificando se delta � maior ou igual a 0
  if (delta >= 0){
    double x1 = cal_x1(a,b,delta); //atribuindo valor para x1 atrav�s de uma opera��o matematica
    double x2 = cal_x2(a,b,delta); //atribuindo valor para x2 atrav�s de uma opera��o matematica
    cout << "\n\nValor de ....x1: " << setfill(' ') << setw(14) << setprecision(2) << x1; //imprimindo valor de x1
    cout << "\nValor de ....x2: " << setfill(' ') << setw(14) << setprecision(2) << x2 << endl << endl; //imprimindo valor de x2
  } //finalizando if
//caso delta seja menor que 0
  else{
    cout << "\n\nImposs�vel calcular x1 e x2\nDelta � negativo!\n\n"; //imprimindo (Imposs�vel calcular x1 e x2 Delta � negativo!)
  } //finalizando else
  //system("sleep 3");
} //finalizando procedimento

