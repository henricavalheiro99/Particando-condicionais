#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	float N1, N2, N3;
	
	cout << "************************"<<endl;
	cout << "*******Bem-vindo********"<<endl;
	cout << "************************"<<endl;
	
	cout << "informe um número: ";
	cin >> N1;
	
	cout << "informe um segundo número: ";
	cin >> N2;
	
	cout << "informe um terceiro número: ";
	cin >> N3;
	
	if (N1>N2 && N1>N3){
		cout << "o primeiro número é o maior";
	}
	
	if (N2>N1 && N2>N3){
		cout << "o segundo número é o maior";
	}
	
	if (N3>N2 && N3>N1){
		cout << "o terceiro número é o maior";
	}
	
}
