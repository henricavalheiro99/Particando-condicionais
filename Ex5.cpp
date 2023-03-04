#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	string letra;
	
	cout << "************************"<<endl;
	cout << "*******Bem-vindo********"<<endl;
	cout << "************************"<<endl;
	
	cout << "informe uma letra: ";
	cin >> letra;
	
	if (letra == "a" or letra == "e" or letra == "i" or letra == "o" or letra == "u"){
		cout << "Sua letra é vogal: ";
	} else{ 
		cout << "Sua letra é consoante: ";	
		}
		
}
