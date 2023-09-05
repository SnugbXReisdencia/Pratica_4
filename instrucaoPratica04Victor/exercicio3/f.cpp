#include<iostream>
#include<limits>
using namespace std;

int main(){

    //Atribuição à variável ui o maior valor que uma variável unsigned int pode receber.
    unsigned int ui = numeric_limits<unsigned int>::max();

    //Identificação do menor e do maior valor que uma variável unsigned int pode representar.
    cout<<"Maior valor que uma variavel unsigned int pode receber: "<<ui<<endl;
    cout<<"Menor valor que uma variavel unsigned int pode receber: "<<numeric_limits<unsigned int>::min()<<endl;

    return 0;
}