#include <iostream>
using namespace std;

//variáveis
float lado1, lado2, lado3;
int opcao;

int main(){
    cout<<"==TIPO DE TRIÂNGULO==\n";

    //estrutura de repetição com while que irá formar um loop até o usuário decidir finalizar o programa
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

    //confere se é equilátero
        if ((lado1 == lado2 ) && (lado1 == lado3)){
            cout<<"Triângulo equilátero: 3 lados iguais\n";
        }

    //confere se é isósceles
        else if ((lado1 == lado2) || (lado1 == lado3) || (lado2 == lado3)){
            cout<<"Triângulo isósceles: 2 lados iguais\n";
        }
    //se não for os anteriores, é escaleno
        else{
            cout<<"Triângulo escaleno: 3 lados diferentes\n";
            }
    }
}
