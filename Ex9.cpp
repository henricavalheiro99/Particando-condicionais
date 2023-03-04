#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n;
	
	cout << "************************"<<endl;
	cout << "*******Bem-vindo********"<<endl;
	cout << "************************"<<endl;
	
	cout << "informe seu ano de nascimento: ";
	cin >> n;
	
	cout << "Sua idade é: " << 2023 - n;
}

