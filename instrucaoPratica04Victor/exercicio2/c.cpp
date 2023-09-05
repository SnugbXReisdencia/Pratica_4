#include<iostream>
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

    return 0;
}