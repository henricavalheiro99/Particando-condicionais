#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	float R, A;
	
	cout << "************************"<<endl;
	cout << "*******Bem-vindo********"<<endl;
	cout << "************************"<<endl;
	
	cout << "informe um valor de raio: ";
	cin >> R;
	
	A = 3.14 * (R * R);
		cout << "a área da circunferencia é de: " << A;
	}
	
