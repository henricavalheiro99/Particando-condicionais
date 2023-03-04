#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	float N1, N2;
	
	cout << "************************"<<endl;
	cout << "*******Bem-vindo********"<<endl;
	cout << "************************"<<endl;
	
	cout << "informe o primeiro número: ";
	cin >> N1;
	
	cout << "informe o segundo número: ";
	cin >> N2;
	
	if (N1>N2){
		cout << "o primeiro número é maior";
	} else if (N1==N2){
		cout << "os números são iguais";
	} else{
		cout << "o segundo número é maior";
	}
	
	
}

