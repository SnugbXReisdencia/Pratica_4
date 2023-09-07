#include <iostream>
#include <climits>

using namespace std;

int main() {
    long int li = LONG_MAX;  
    unsigned int ui = li;   


    li = ui;  

    cout << "Valor de li: " << li << endl;
    cout << "Valor de ui: " << ui << endl;

    return 0;
}
