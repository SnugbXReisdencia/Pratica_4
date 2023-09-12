#include <iostream>
#include <locale>
#include <string>
using namespace std;

int main(){
    locale::global(locale(""));
    system("clear");

    // A: Faça uma aplicação que mostre como os diversos tipos que foram
    // estudados até aqui são convertidos em true ou false.

    int i = 42;
    float f = 3.14;
    double d = 2.71828;
    char c = 'A';

    cout << boolalpha;
    cout << "int: " << static_cast<bool>(i) << endl;
    cout << "float: " << static_cast<bool>(f) << endl;
    cout << "double: " << static_cast<bool>(d) << endl;
    cout << "char: " << static_cast<bool>(c) << endl;
    

    return 0;
}