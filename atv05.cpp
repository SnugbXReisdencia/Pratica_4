#include <iostream>

int main() {
    int intValor = 42;
    float floatValor = 3.14;
    double doubleValor = 2.71828;
    char charValor = 'A';
    bool boolValor = true;
    using namespace std;
    // Verificando conversão para bool
    cout << "int em bool: " << (intValor ? "true" : "false") << endl;
    cout << "float em bool: " << (floatValor ? "true" : "false") << endl;
    cout << "double em bool: " << (doubleValor ? "true" : "false") << endl;
    cout << "char em bool: " << (charValor ? "true" : "false") << endl;
    cout << "bool em bool: " << (boolValor ? "true" : "false") << endl;

    return 0;
}
