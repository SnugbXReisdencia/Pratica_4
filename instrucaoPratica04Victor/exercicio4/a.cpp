#include<iostream>
#include<limits>
using namespace std;

int main(){

    cout<<"Maior valor que pode ser representado pelo tipo float: "<<numeric_limits<float>::max()<<endl;
    cout<<"Menor valor que pode ser representado pelo tipo float: "<<numeric_limits<float>::min()<<endl;

    return 0;
}