#include<iostream>
#include<iomanip>
#include "mytemperature.h"
using namespace std;

int main() {
	cout << fixed << setprecision(2);
	cout << setw(10) << "Celsius" << setw(15) << "Fahrenheit";
	cout << setw(10) << "|" ;
	cout << setw(20) << "Fahrenheit" << setw(15) << "Celsius" << endl;

	double cel = 40.0, fah = 120.0;
	for (int i = 0; i < 10; i++) {
		cout << setw(10) << cel << setw(15) << celsius_to_fah(cel);
		cout << setw(10) << "|" ;
		cout << setw(20) << fah << setw(15) << fahrenheit_to_cels(fah) << endl;
		cel -= 1.0;
		fah -= 10.0;
	}


	return 0;
}