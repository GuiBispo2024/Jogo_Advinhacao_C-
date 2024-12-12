#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int chute;
bool acerto;
int tentativa = 0;
double pontos = 1000.0;
char dificuldade;
int numero_tentativas;

int main() {
    cout << "******************************************" << endl;
    cout << "*** Bem-Vindo ao jogo da advinhacao!!! ***" << endl;
    cout << "******************************************" << endl;

    cout << "Slelecione a dificuldade" << endl;
    cout << "Facil(1) Medio(2) Dificil(3)" << endl;
    cin >> dificuldade;

    switch(dificuldade){
        case '1' : 
            numero_tentativas = 10;
            break;
        case '2' :
            numero_tentativas = 8;
            break;
        case '3' :
            numero_tentativas = 5;
            break;
        default :
            cout << "Digite uma dificuldade valida" << endl;
            break;
    }

    srand(time(NULL));
    const int NUMERO_SECRETO = rand() % 100;
        
    for(tentativa = 1; tentativa <= numero_tentativas; tentativa++){
        cout << "Tentativa: " << tentativa << endl;
        cout << "Qual seu chute? ";
        cin >> chute;

        double pontos_perdidos = abs(chute - NUMERO_SECRETO)/2.0;
        pontos = pontos - pontos_perdidos;

        bool acertou = chute == NUMERO_SECRETO;
        bool menor = chute < NUMERO_SECRETO;
        bool maior = chute > NUMERO_SECRETO;
 
        if(acertou){
            cout << "Parabens voce acertou o numero secreto!!" << endl;
            acerto = true;
            break;
        }
        else if(menor){
            cout << "O numero secreto e maior!!" << endl;
        }
        else if(maior){
            cout << "O numero secreto e menor!!" << endl;
        }
    }

    if(acerto == false){
        cout << "Voce nao acertou o numero secreto, tente novamente" << endl;
    }
    else{
        cout << "Fim de jogo!! voce acertou em " << tentativa << " tentativas" << endl;
        cout.precision(2);
        cout << fixed;
        cout << "Sua pontuacao e " << pontos << " pontos" << endl;
    }   
}
