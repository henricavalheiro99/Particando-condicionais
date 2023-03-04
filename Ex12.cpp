#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	float TC, TF;
	
	cout << "************************"<<endl;
	cout << "*******Bem-vindo********"<<endl;
	cout << "************************"<<endl;
	
	cout << "informe uma temperatura em Celsius: ";
	cin >> TC;
	
	TF = TC * 1.8 + 32;
		cout << "A temperatura em é Fahrenheit é: " << TF;
		
	}
	
