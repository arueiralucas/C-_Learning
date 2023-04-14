#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main (){
    //Cabeçario do programa
    cout << "     *************************************\n";
    cout << "     * Bem Vindos ao Jogo da Adivinhacao *\n";
    cout << "     *************************************\n";
    cout << "***** Escolha o seu nivel de Dificuldade  ***** :\n";
    cout << "  **** Facil (F), Medio (M), Dificil (D) ****\n";
    //Escolhendo uma Dificuldade
    char dificuldade;
    cin >> dificuldade;

    int numero_de_tentativas;
    if (dificuldade == 'F'){
        numero_de_tentativas = 15;
    }
    else if (dificuldade == 'M'){
        numero_de_tentativas = 10;
    }
    else{
        numero_de_tentativas = 5;
    }


    //numero secreto
    srand(time(NULL));
    const int NUMERO_SECRETO = rand() % 100;
    bool nao_acertou = true;
    int tentativas=0;
    double pontos = 1000.0;
    //laço de repetição.
    for(tentativas = 1; tentativas <= numero_de_tentativas;tentativas++){
        cout << "Tentativa : "<<tentativas << endl;
        cout << "Chute um numero :... \n";
        int chute;
        cin >> chute;
        cout << "Seu chute foi : "<< chute << endl;
        double pontos_perdidos = abs(chute - NUMERO_SECRETO)/2.0;
        pontos = pontos-pontos_perdidos;
        //Condiçoes boleanas
        bool acertou = (chute == NUMERO_SECRETO);
        bool maior = (chute > NUMERO_SECRETO);
        if (acertou){
        cout << " ***Parabens voce acertou o numero secreto !***\n";
        nao_acertou = false;
        break;
        }
        else if (maior){
        cout << "Seu chute foi maior que o numero secreto ! ";
    }
        else {
        cout << "Seu numero e menor que o numero secreto !\n";
        }


    }
    if(nao_acertou){
        cout << "Voce perdeu, tente movamente !";
        
    }
    else{
        cout << "Voce acertou em : "<< tentativas << " tentativas.\n";
        cout.precision(2);
        cout << fixed;
        cout << "Sua pontuacao foi de  : "<< pontos << " pontos \n";
        cout << "FIM DE JOGO\n";
    }
        
    


}
