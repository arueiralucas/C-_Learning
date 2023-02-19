#include <iostream>
using namespace std;
int main(){
	//tipo nome
	//tipo nome=valor
	int vidas=0; //10,25
	char letra='B';//"B"
	double decimal=4.49999;//2.4999999 
	float decimal2=4.5;//2.5
	bool vivo=true;//true=verdadeiro / false-falso
	string nome="Lucas";//"Lucas"
	
	//cout << vidas << "\n";
	//cout << letra << "\n";
	//cout << decimal << "\n";
	//cout << decimal2 << "\n";
	//cout << vivo << "\n";
	//cout << nome << "\n";
	cout << "Digite a quantidade de vidas :";
	cin >> vidas;
	
	cout << "Digite um Caractere :";	
	cin >> letra;
	
	cout <<"Digite uma dizima periodica";
	cin >>decimal;
	
	cout <<"Digite um número decimal";
	cin >>decimal2;
	
	cout <<"Digite seu nome :";
	cin >>nome;
	
	cout << vidas << "\n";
	cout << letra << "\n";
	cout << decimal << "\n";
	cout << decimal2 << "\n";
	cout << vivo << "\n";
	cout << nome << "\n";
	return 0;
}
