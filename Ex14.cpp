#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	float L, A;
	
	cout << "************************"<<endl;
	cout << "*******Bem-vindo********"<<endl;
	cout << "************************"<<endl;
	
	cout << "informe um valor de lado: ";
	cin >> L;
	
	A = L * L;
		cout << "a área do quadrado é de: " << A;
	}
	
