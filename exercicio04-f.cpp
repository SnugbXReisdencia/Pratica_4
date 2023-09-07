#include <iostream>
#include <cmath>
#include <iostream>
#include <limits>

using namespace std;


int main(void){


    double pid = M_PI;
    double long pid_long = M_PI;


    cout << "double: " << numeric_limits<double>::digits10 << " digitos decimais significativos." << endl;
    cout << "long double: " << numeric_limits<long double>::digits10 << " digitos decimais significativos." << endl;


    return 0;

}


