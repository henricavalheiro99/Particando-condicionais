#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese");
	
    int num, i, result = 0;

    cout << "Digite um n�mero inteiro: ";
    cin >> num;

    for (i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            result = 1;
            break;
        }
    }

    if (num == 1) {
        cout << "1 n�o � primo." << endl;
    } else {
        if (result == 0) {
            cout << "O n�mero " << num << " � primo." << endl;
        } else {
            cout << "O n�mero " << num << " n�o � primo." << endl;
        }
    }
    
}
