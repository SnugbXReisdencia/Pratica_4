#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main(){

    float pif = M_PI;
    cout<<"Valor de PI com 2 casas decimais: "<<fixed<<setprecision(2)<<pif<<endl;
    cout<<"Valor de PI com 4 casas decimais: "<<fixed<<setprecision(4)<<pif<<endl;
    cout<<"Valor de PI com 8 casas decimais: "<<fixed<<setprecision(8)<<pif<<endl;
    cout<<"Valor de PI com 16 casas decimais: "<<fixed<<setprecision(16)<<pif<<endl;
    
    return 0;
}