#include <iostream>
#include <climits>
#include <cmath>
#include <iomanip>


using namespace std;

int main(void){
    // Atribua o valor de li a ui (unsigned int) e depois atribua ui a li
    long int maiorLongInt = LONG_MAX;
    long int li = maiorLongInt;
    unsigned int ui = li;

    cout << "Valor de ui " << ui << endl;
    li = ui;  
    
    // causar uma perda de dados,
    // porque ui pode ter um valor maior do que o maior valor representável por li.
    
    cout << "Valor de li " << li << endl;
    
    return 0;
}