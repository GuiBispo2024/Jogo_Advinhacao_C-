#include<iostream>
using namespace std;

const int NUMERO_SECRETO = 89;
int chute;
bool acerto;
int tentativa = 0;

int main() {
    cout << "******************************************" << endl;
    cout << "*** Bem-Vindo ao jogo da advinhacao!!! ***" << endl;
    cout << "******************************************" << endl;

    while(acerto==false){
        tentativa++;
        cout << "Tentativa: " << tentativa << endl;
        cout << "Qual seu chute? ";
        cin >> chute;

        bool acertou = chute == NUMERO_SECRETO;
        bool menor = chute < NUMERO_SECRETO;
        bool maior = chute > NUMERO_SECRETO; 

        if(acertou){
            cout << "Parabens voce acertou o numero secreto!!" << endl;
            acerto = true;
        }
        else if(menor){
            cout << "O numero secreto e maior!!" << endl;
        }
        else if(maior){
            cout << "O numero secreto e menor!!" << endl;
        }
    }

   cout << "Fim de jogo!! voce acertou em " << tentativa << " tentativas" << endl;
    
}
