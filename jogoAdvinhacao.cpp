#include<iostream>
using namespace std;

int numero_secreto = 89;
int chute;
int main() {
    cout << "******************************************" << endl;
    cout << "*** Bem-Vindo ao jogo da advinhacao!!! ***" << endl;
    cout << "******************************************" << endl;

    cout << "Qual seu chute? ";
    cin >> chute;

    if(chute == numero_secreto){
        cout << "Parabens voce acertou o numero secreto!!" << endl;
    }
    else if(chute < numero_secreto){
        cout << "O numero secreto e maior!!" << endl;
    }
    else if(chute > numero_secreto){
        cout << "O numero secreto e menor!!" << endl;
    }
}
