#include <iostream>
#include <locale>
#include <string>
using namespace std;

int main(){
    // locale::global(locale(""));
    setlocale(LC_ALL, "Portuguese");
    system("clear");

    // A: Faça uma aplicação que mostre como os diversos tipos que foram
    // estudados até aqui são convertidos em true ou false.

    int intValue = 0;
    float floatValue = 0.0;
    double doubleValue = 0.0;
    char charValue = '\0';
    bool boolValue = false;

    if (intValue) {
        wcout << L"intValue é verdadeiro" << endl;
    } else {
        wcout << L"intValue é falso" <<  endl;
    }

    if (floatValue) {
        wcout << L"floatValue é verdadeiro" <<  endl;
    } else {
        wcout << L"floatValue é falso" <<  endl;
    }

    if (doubleValue) {
        wcout << L"doubleValue é verdadeiro" <<  endl;
    } else {
        wcout << L"doubleValue é falso" <<  endl;
    }

    if (charValue) {
        wcout << L"charValue é verdadeiro" <<  endl;
    } else {
        wcout << L"charValue é falso" <<  endl;
    }

    if (boolValue) {
        wcout << L"boolValue é verdadeiro" <<  endl;
    } else {
        wcout << L"boolValue é falso" <<  endl;
    }

    // Nesse exemplo usei alguns tipos de dados que foram estudados
    // E testei usando o comando if e else para ver como é convertido
    // os valores para true ou false. Notei que o tipo char é convertido para
    // true quando seu valor é diferente de '\0', para os tipos int, float e double
    // o valor é convertido para true quando seu valor for diferente de 0.

    return 0;
}