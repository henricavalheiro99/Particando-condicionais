#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese");
	
    int num;

    cout << "Digite um n�mero inteiro: ";
    cin >> num;

    if (num % 2 == 0) {
        cout << "O n�mero " << num << " � par." << endl;
    } else {
        cout << "O n�mero " << num << " � �mpar." << endl;
    }
    
}
