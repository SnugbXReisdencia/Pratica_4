#include<iostream>
#include<limits>
using namespace std;

int main(){

    long int li = numeric_limits<long int>::max();
    cout<<"Menor valor que pode ser armazenado a um long int: "<<numeric_limits<long int>::min()<<endl;
    cout<<"Maior valor que pode ser armazenado a um long int: "<<li<<endl;

    unsigned int ui = li;
    li = ui;
    cout<<"Valor de li após receber de ui: "<<li<<endl;

    /*
        A variável li recebeu de ui o maior valor que pode ser armazenado a uma variável
        do tipo unsigned int.
    */
    
    return 0;
}