#include <iostream>
using namespace std;

//vari�veis
float lado1, lado2, lado3;
int opcao;

int main(){
    cout<<"==TIPO DE TRI�NGULO==\n";

    //estrutura de repeti��o com while que ir� formar um loop at� o usu�rio decidir finalizar o programa
    while(true){
        cout<<"1 - Verificar triangulo\n2 - Sair\n";
        cin>>opcao;
        if (opcao != 1){
            cout<<"finalizado";
            break;}

    //informando as medidas dos lados
        cout<<"Lado 1: ";
        cin>>lado1;

        cout<<"Lado 2: ";
        cin>>lado2;

        cout<<"Lado 3: ";
        cin>>lado3;

    //confere se � equil�tero
        if ((lado1 == lado2 ) && (lado1 == lado3)){
            cout<<"Tri�ngulo equil�tero: 3 lados iguais\n";
        }

    //confere se � is�sceles
        else if ((lado1 == lado2) || (lado1 == lado3) || (lado2 == lado3)){
            cout<<"Tri�ngulo is�sceles: 2 lados iguais\n";
        }
    //se n�o for os anteriores, � escaleno
        else{
            cout<<"Tri�ngulo escaleno: 3 lados diferentes\n";
            }
    }
}
