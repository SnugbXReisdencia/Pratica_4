#include <iostream>
#include <string>

int main() {
    std::wstring caractere1 = L"ç";
    std::wstring caractere2 = L"ã";
    
    std::wcout << L"Caractere 1: " << caractere1 << std::endl;
    std::wcout << L"Caractere 2: " << caractere2 << std::endl;
    
    return 0;
}