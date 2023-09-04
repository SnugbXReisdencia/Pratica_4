#include <iostream>
#include <iomanip>

using namespace std;
int main() {
    // Parte a
    cout << "Parte a:" << endl;
    for (char i = '0'; i <= '9'; ++i) {
        cout <<  i << " - " << int(i) << endl;
    }  
 
    // Parte b
    cout << "Parte a:" << endl;
    for (char i = '0'; i <= '9'; ++i) {
         cout <<  i << " - " <<  int(i) << " octal: " << oct << int(i) << " hexadecimal: " << hex << int(i) << endl;
    }

    // Parte c e d
    // Para armazenar caracteres especiais como 'ç' e 'ã' ,  pode usar variáveis do tipo char ou string

    char letra;
    cout << "Digite um caractere: ";
    cin >> letra;
    cout << "'" << letra << "' - " << static_cast<int>(letra) << " (octal: " << oct << static_cast<int>(letra) << ", hexadecimal: " << hex << static_cast<int>(letra) << ")" << endl;
    
    return 0;
}
