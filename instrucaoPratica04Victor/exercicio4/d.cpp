#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main(){

    double pid = M_PI;
    cout<<"Valor de PI do tipo double com o máximo de casas decimais representado: "<<fixed<<setprecision(48)<<pid<<endl;

    return 0;
}