#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	float SM, H, SB;
	
	cout << "************************"<<endl;
	cout << "*******Bem-vindo********"<<endl;
	cout << "************************"<<endl;
	
	cout << "informe seu salário: ";
	cin >> SM;
	
	cout << "informe o número de horas que você trabalha: ";
	cin >> H;
	
	SB = SM + (12 * H);
		cout << "o valor do seu salário bruto é " << SB;
		
}
