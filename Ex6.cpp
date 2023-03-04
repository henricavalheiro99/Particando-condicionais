#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	float p,a,result;

	cout << "************************"<<endl;
	cout << "*******Bem-vindo********"<<endl;
	cout << "************************"<<endl;
	
	cout << "informe seu peso: ";
	cin >> p;
	
	cout << "informe sua altura: ";
	cin >> a;
	
	result = p / (a*a);
	
	if (result <18.5){
		cout << "abaixo do peso, seu imc é: " << result;
		
	} else if (result >=18.5 && result <=24.9){
		cout << "peso normal, seu imc é: " << result;
		
	} else if (result >=25 && result <=29.9){
		cout << "sobrepeso, seu imc é: " << result;
		
	} else if (result >=30 && result <=34.9){
		cout << "Obesidade grau I, seu imc é: " << result;
		
	} else if (result >=35 && result <=39.9){
		cout << "Obesidade grau II, seu imc é: " << result;
		
	} else {
		cout << "Obesidade grau III, seu imc é: " << result;
	}
	
}
