#include <iostream>
using namespace std;

	int n1,n2;//variareis globais
int main(){
	int n3,n4,soma,subi;//variáveis locais
	float medi;	
	
	// resto %
	
	cout << "Digite um numero \n";
	cin >> n1;	
	cin >> n2;
	cin >> n3;	
	cin >> n4;
	
	soma =(n1+n2+n3+n4);
	subi = (n1-n2-n3-n4);
	medi = (n1+n2+n3+n4)/4;
	
	cout <<"A Soma desse numeros e : "<< soma <<"\n";
	cout <<"A Subtracao desse numeros e : "<< subi <<"\n";
	cout <<"A Media desse numeros e : "<< medi <<"\n";
	
	
	
	return 0;
}
