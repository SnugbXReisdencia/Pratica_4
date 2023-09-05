#include<iostream>
#include<limits>
using namespace std;

int main(){

    unsigned long int uli = numeric_limits<unsigned long int>::max();
    cout<<"Valor inicial da variavel uli: "<<uli<<endl;
    long int li = uli;
    uli = li;
    cout<<"Valor da variável uli apos a interacao com a variavel li: "<<uli<<endl;

    /*
        Após atribuir o valor da variável do tipo unsigned long int 
        à variavel long int o valor não foi alterado. Se o valor de li
        for impresso será possível notar que irá aparecer um número negativo,
        pois a interpretação dos bits para uma variável long int é diferente 
        em comparação a uma variável do tipo unsigned long int, devido ao valor
        máximo suportado.
    */
    return 0;
}