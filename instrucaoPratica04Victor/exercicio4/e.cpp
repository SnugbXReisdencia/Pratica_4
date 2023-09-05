#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main(){

    float pif = M_PI;
    double pid = M_PI;

    //Tipo float
    cout<<"Valor de PI float com 2 casas decimais: "<<fixed<<setprecision(2)<<pif<<endl;
    cout<<"Valor de PI float com 4 casas decimais: "<<fixed<<setprecision(4)<<pif<<endl;
    cout<<"Valor de PI float com 8 casas decimais: "<<fixed<<setprecision(8)<<pif<<endl;
    cout<<"Valor de PI float com 16 casas decimais: "<<fixed<<setprecision(16)<<pif<<endl<<endl;

    //Tipo double
    cout<<"Valor de PI double com 2 casas decimais: "<<fixed<<setprecision(2)<<pid<<endl;
    cout<<"Valor de PI double com 4 casas decimais: "<<fixed<<setprecision(4)<<pid<<endl;
    cout<<"Valor de PI double com 8 casas decimais: "<<fixed<<setprecision(8)<<pid<<endl;
    cout<<"Valor de PI double com 16 casas decimais: "<<fixed<<setprecision(16)<<pid<<endl;
    
    /*
        É possível notar diferenças nas representações de PI entre 
        os tipos float e double com 8 e 16 casas decimais. Com 2 e
        4 casas decimais os valores são iguais.
    */

    return 0;
}