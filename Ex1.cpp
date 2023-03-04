#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int nascimento, hoje, result;
	
	cout << "************************"<<endl;
	cout << "*******Bem-vindo********"<<endl;
	cout << "************************"<<endl;
	
	cout << "informe seu ano de nascimento: ";
	cin >> nascimento;
	
	cout << "informe o ano de hoje: ";
	cin >> hoje;
	
	result = (hoje-nascimento);
	
	if (result>=16){
		cout << "Você pode votar, pois possui " << result << " anos";	
	}else {
			cout << "Voce não pode votar, pois possui " << result << " anos";
	}
}
