#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int t;
	
	cout << "************************"<<endl;
	cout << "*******Bem-vindo********"<<endl;
	cout << "************************"<<endl;
	
	cout << "informe o número de lados iguais do triângulo: ";
	cin >> t;
	
	if (t == 3){
		cout << "o triângulo é equilátero";
	}
	
	if (t == 2){
		cout << "o triângulo é isósceles";
	}
	
	if (t == 0){
		cout << "o triângulo é escaleno";
	}

}
