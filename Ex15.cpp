#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese");
	
    int num;

    cout << "Digite um número inteiro: ";
    cin >> num;

    if (num % 3 == 0 && num % 5 == 0) {
        cout << "O número " << num << " é múltiplo de 3 e de 5." << endl;
    } else {
        cout << "O número " << num << " não é múltiplo de 3 e de 5." << endl;
    }
    
}
