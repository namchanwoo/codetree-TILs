#include <iostream>
using namespace std;

int main() {

	cout << fixed;
    cout.precision(6);

	double a = 13.0f;
    double b = 0.165000;
    double c = a*b;

	
	cout << a <<"*"<<b<<"="<<c;

	

	return 0;

}