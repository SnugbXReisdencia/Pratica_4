#include <iostream>
#include <stdio.h>
#include <wchar.h>
#include <locale.h>

using namespace std;


int main(void){
  // conversão de Caracter especial
    cout << "Caracter especial " << '!' << " corresponde ao valor" <<  int('!') << endl;
    cout << "Caracter especial " << '?' << " corresponde ao valor" <<  int('?') << endl;
    cout << "Caracter especial " << '~' << " corresponde ao valor" <<  int('~') << endl;
    cout << "Caracter especial " << '^' << " corresponde ao valor" <<  int('^') << endl;



    return 0;

}