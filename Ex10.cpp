#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese");
	
    int num, i, result = 0;

    cout << "Digite um número inteiro: ";
    cin >> num;

    for (i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            result = 1;
            break;
        }
    }

    if (num == 1) {
        cout << "1 não é primo." << endl;
    } else {
        if (result == 0) {
            cout << "O número " << num << " é primo." << endl;
        } else {
            cout << "O número " << num << " não é primo." << endl;
        }
    }
    
}
