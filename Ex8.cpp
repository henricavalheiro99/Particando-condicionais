#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	float N;
	
	cout << "************************"<<endl;
	cout << "*******Bem-vindo********"<<endl;
	cout << "************************"<<endl;
	
	cout << "informe um número: ";
	cin >> N;
	
	if (N > 0){
		cout << "seu número é positivo";
	} else if (N == 0){
		cout << "seu número é igual a 0";
	} else {
		cout << "seu número é negativo";
	}
	
}
