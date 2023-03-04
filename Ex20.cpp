#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	cout << "************************"<<endl;
	cout << "*******Bem-vindo********"<<endl;
	cout << "************************"<<endl;
	
	string l, s;
	
	cout << "Informe o login: ";
	cin >> l;
	
	cout << "informe a senha: ";
	cin >> s;
	
	if (l == s){
		cout << "Pode entrar";
	} else {
		cout << "Login e senha incorretos";
	}
}
