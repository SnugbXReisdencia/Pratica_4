#include <iostream>
#include <climits>
#include <cmath>
#include <iomanip>


using namespace std;

int main(void){

 // Crie uma variável uli (unsigned long int) com o maior valor possível
 
unsigned long int uli = M_PI;

cout << "Valor de uli com o maior valor que pode ser armazenado: " << INT32_MAX << uli << endl;
cout << "Valor de pi com menor valor que pode ser armazenado: " << INT32_MIN << uli << endl;



return 0;
}