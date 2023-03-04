#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	string N1, N2;
	int I1, I2;
	
	cout << "************************"<<endl;
	cout << "*******Bem-vindo********"<<endl;
	cout << "************************"<<endl;
	
	cout << "informe o nome da primeira pessoa: ";
	cin >> N1;
	
	cout << "informe o nome da segunda pessoa: ";
	cin >> N2;
	
	cout << "informe a idade da primeira pessoa: ";
	cin >> I1;
	
	cout << "informe a idade da segunda pessoa: ";
	cin >> I2;
	
	if (I1>I2){
		cout << "A primeira pessoa é mais velha";
	} else {
		cout << "A segunda pessoa é mais velha";
	}
	
}
