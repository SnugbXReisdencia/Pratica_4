#include <iostream>
#include <climits>
#include <cmath>
#include <iomanip>


using namespace std;

int main(void){
    // Atribua a li o maior valor que pode ser armazenado em um long int
    long int menorLongInt = LONG_MIN;
    long int maiorLongInt = LONG_MAX;

    long int li = maiorLongInt;
    cout << "O maior valor representável por um long int é: " << maiorLongInt << endl;
    cout << "Valor de li após atribuição: " << li << endl;



return 0;
}