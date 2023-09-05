#include<iostream>
#include<limits>
using namespace std;

int main(){

    unsigned long int uli = numeric_limits<unsigned long int>::max();
    cout<<"O maior valor que pode ser representado no tipo unsigned long int é "<<uli<<endl;
    uli = numeric_limits<unsigned long int>::min();
    cout<<"O menor valor que pode ser representado no tipo unsigned long int é "<<uli<<endl;

    return 0;
}