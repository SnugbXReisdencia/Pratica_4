# include <iostream>
# include <string>
# include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    system("cls");
    // A: Imprima na tela, utilizando cout, cada um dos caracteres numéricos
    // e seu correspondente código numérico. Como modificar o
    // comportamento do cout para imprimir um objeto de tipo char como
    // caractere e como número?
    // char caracter;

    // for (size_t i = 48; i < 58; i++)
    // {
    //     caracter = i;
    //     cout << "Caracter = " << caracter << "\nValor na Tabela ASCII = " << i << endl << endl;
    // }

    // B: Modifique o exercício anterior para que a saída imprima também o
    // código numérico em octal e em hexadecimal.
    
    // for (int i = 48; i < 58; i++) {
    //     caracter = static_cast<char>(i);
    //     cout << "Caracter = '" << caracter << "'" << endl;
    //     cout << "Valor na Tabela ASCII Decimal = " << dec << i << endl;
    //     cout << "Valor na Tabela ASCII Octal = " << oct << i << endl;
    //     cout << "Valor na Tabela ASCII Hexadecimal = " << hex << i << endl;
    //     cout << endl;
    // }

    // C: Acrescente ao código do exercício anterior a possibilidade de ler um
    // caractere qualquer e imprima no mesmo formato do inciso anterior

    // cout << "Digite um caracter: " << endl;
    // cin >> caracter;

    // cout << "Caracter = '" << caracter << "'" << endl;
    // cout << "Valor na Tabela ASCII Decimal = " << dec << static_cast<int>(caracter) << endl;
    // cout << "Valor na Tabela ASCII Octal = " << oct << static_cast<int>(caracter) << endl;
    // cout << "Valor na Tabela ASCII Hexadecimal = " << hex << static_cast<int>(caracter) << endl;
    // cout << endl;

    // D: Pesquise como fazer para armazenar uma variável os caracteres
    // especiais ‘ç’ e ‘ã’. Acrescente no código do exercício anterior um
    // exemplo que demonstra como usar este recurso.

    // wchar_t c1 = L'ç'; // 'ç' em uma variável wchar_t
    // wchar_t c2 = L'ã'; // 'ã' em uma variável wchar_t

    // wcout << L"Caracter 1: " << c1 << endl;
    // wcout << L"Caracter 2: " << c2 << endl;


    return 0;
}
