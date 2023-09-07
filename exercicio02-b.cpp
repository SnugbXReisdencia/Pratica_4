#include <iostream>
#include <stdio.h>
#include <wchar.h>
#include <locale.h>

using namespace std;


int main(void){
  // conversão com numeros
    cout << "o numero " << 0 << " corresponde ao valor em hex " <<  hex << int('0') << endl;
    cout << "o numero " << 1 << " corresponde ao valor em hex " <<  hex << int('1') << endl;
    cout << "o numero " << 5 << " corresponde ao valor em hex " <<  hex << int('5') << endl;
    cout << "o numero " << 6 << " corresponde ao valor em oct " <<  oct << int('6') << endl;
    cout << "o numero " << 7 << " corresponde ao valor em oct " <<  oct << int('7') << endl;
    cout << "o numero " << 8 << " corresponde ao valor em oct " <<  oct << int('8') << endl;
    cout << "o numero " << 9 << " corresponde ao valor em oct " <<  oct <<  int('9') << endl;

  // conversão com letras 
    cout << "A letra " << 'B' << " corresponde ao valor em oct " << oct<< int('B')<< endl;
    cout << "o letra " << 'w' << " corresponde ao valor em hex " <<  hex << int('w') << endl;



    return 0;

}