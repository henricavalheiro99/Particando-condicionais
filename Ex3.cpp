#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	float p1,p2,result,f;
	
	cout << "************************"<<endl;
	cout << "*******Bem-vindo********"<<endl;
	cout << "************************"<<endl;
	
	cout << "informe a primeira nota: ";
	cin >> p1;
	
	cout << "informe a segunda nota: ";
	cin >> p2;
	
	cout << "informe seu número de faltas: ";
	cin >> f;
	
	result = (p1+p2) / 2;
	
	if (result >=7 && f<=25) {
		cout << "Você passou de ano: " << result << " parabéns";
	} else{
		cout << "REPROVADO BURRO!: ";
	}
		
		
}
