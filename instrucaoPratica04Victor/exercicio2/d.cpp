#include<iostream>
#include<string>
using namespace std;

int main(){

    char number, caractere;
    cin>>caractere;
    number = caractere;

    cout<<"Codigo numerico decimal:"<<endl;
    for(int i = 0; i < 10; i++){
        cout<<number<<" - "<<int(number)<<endl;
        number++;
    }

    cout<<endl;
    number = caractere;
    cout<<"Codigo numerico octal:"<<endl;

    for(int i = 0; i < 10; i++){
        cout<<number<<" - "<<oct<<int(number)<<endl;
        number++;
    }

    cout<<endl;
    number = caractere;
    cout<<"Codigo numerico hexadecimal:"<<endl;

    for(int i = 0; i < 10; i++){
        cout<<number<<" - "<<hex<<int(number)<<endl;
        number++;
    }

    //Exemplo de como armazenar os caracteres ç e ã
    string caractereString;
    cin>>caractereString;

    cout<<caractereString<<endl;

    return 0;
}