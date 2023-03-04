#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	float sb,sa;
	
	cout << "************************"<<endl;
	cout << "*******Bem-vindo********"<<endl;
	cout << "************************"<<endl;
	
	cout << "informe seu salário: ";
	cin >> sb;
	
	if (sb <= 1000){
		sa = sb * 1.15;
		cout << "o salário base era: " << sb <<" e o salário aumentado é: " << sa;
		
	} else if (sb >1000 && sb <=2000){
		sa = sb * 1.10;
		cout << "o salário base era: " << sb <<" e o salário aumentado é: " << sa;
		
	} else {
		sa = sb * 1.05;
		cout << "o salário base era: " << sb <<" e o salário aumentado é: " << sa;
	}
	
	
}
