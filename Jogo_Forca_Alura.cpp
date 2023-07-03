#include <stdio.h>
#include <iostream>
#include <map>
//Constantes e namespace
using namespace std;
const string PALAVRA_SECRETA = "MELANCIA";

//função map para ver se tem a letra na palavra
map<char, bool> chutou;

//Função para  ver o tamanho da palavra e checar se a letra existe ou não
bool letra_existe(char chute){
    for(int i = 0; i < PALAVRA_SECRETA.size();i++){
        if (chute == PALAVRA_SECRETA[i])
            return true; 
    }
    return false;
    
}
//programna principal
int main (){    
    bool nao_acertou = true;
    bool nao_enforcou = true;

    while(nao_acertou && nao_enforcou){
        for (char letra : PALAVRA_SECRETA){
            if (chutou[letra]){
                cout<< letra << " ";
            }
            else {
                cout << "_ ";
            }
        }
            
        char chute;
        cin >> chute;

        chutou[chute] = true;

        if (letra_existe(chute)){
            cout << "Você Acertou o chute."<< endl;
        }
        else{
            cout << "Você errou o chute . "<< endl;
        }
    }

}
