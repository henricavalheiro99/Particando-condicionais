#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese");
	
    int num;

    cout << "Digite um n�mero inteiro: ";
    cin >> num;

    if (num % 3 == 0 && num % 5 == 0) {
        cout << "O n�mero " << num << " � m�ltiplo de 3 e de 5." << endl;
    } else {
        cout << "O n�mero " << num << " n�o � m�ltiplo de 3 e de 5." << endl;
    }
    
}
