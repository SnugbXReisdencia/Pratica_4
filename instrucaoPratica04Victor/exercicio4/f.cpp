#include<iostream>
#include<limits>
#include<cmath>
#include<iomanip>
using namespace std;

int main(){

    //Tipo double
    double pid = M_PI;
    cout<<"TIPO DOUBLE: "<<endl;
    cout<<"Maior valor que pode ser representado "<<numeric_limits<double>::max()<<endl;
    cout<<"Menor valor que pode ser representado: "<<numeric_limits<double>::min()<<endl;
    cout<<"Representação de PI: "<<pid<<endl<<endl;

    //tipo long double
    long double pild = M_PI;
    cout<<"TIPO LONG DOUBLE: "<<endl;
    cout<<"Maior valor que pode ser representado: "<<numeric_limits<long double>::max()<<endl;
    cout<<"Menor valor que pode ser representado: "<<numeric_limits<long double>::min()<<endl;
    cout<<"Representação de PI: "<<pild<<endl;

    return 0;
}