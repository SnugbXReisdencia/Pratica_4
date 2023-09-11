#include <iostream>
#include <climits>
#include <cmath>
#include <iomanip>


using namespace std;

int main(void){
         
    //Atribua a ui o maior valor que pode ser armazenado em um unsigned int
    unsigned int menorUnsignedInt = 0;
    unsigned int maiorUnsignedInt = UINT_MAX;
    
    unsigned int ui = maiorUnsignedInt;
    std::cout << "O maior valor unsigned int e: " << maiorUnsignedInt << std::endl;
    std::cout << "Valor de ui : " << ui << std::endl;

    return 0;
}