#include<iostream>
#include<limits>
using namespace std;

int main(){

    long int li = numeric_limits<long int>::max();
    cout<<"Menor valor que pode ser armazenado a um long int: "<<numeric_limits<long int>::min()<<endl;
    cout<<"Maior valor que pode ser armazenado a um long int: "<<li<<endl;

    return 0;
}