#include <iostream>
#include <climits>

using namespace std;

int main() {

    unsigned long int uli = ULONG_MAX;
    long int li = uli;
    
    uli = li;

    cout <<  "Valor de uli: " << uli  << endl;
    cout << "Valor de li: " << li << endl;
    
    return 0;
}
