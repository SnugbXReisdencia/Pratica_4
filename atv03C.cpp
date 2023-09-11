#include <iostream>
#include <climits>
#include <cmath>
#include <iomanip>


using namespace std;

int main(void){

    //Atribua o valor da variável uli a li (long int) e depois atribua li a uli
    unsigned long int uli = ULONG_MAX;
    
    long int li = uli;
    uli = li;
    
    // na conversão de tipo  pode causar perda de dados,
    // porque li pode ter um valor maior do que o maior valor representável por uli.
    cout << "Valor de li : " << li << endl;
    cout << "Valor de uli : " << uli << endl;



return 0;
}