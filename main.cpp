#include <iostream>;
#include <string>;

using namespace std;
//Functions

int iCelsius() {
	int grad = NULL;
	cout << "Geben Sie ihre Temperatur in Celsius ein.";
	cin >> grad;
	return grad;
}

int iFahrenheit() {
	int grad = NULL;
	cout << "Geben Sie ihre Temperatur in Fahrenheit ein.";
	cin >> grad;
	return grad;
}
int iKelvin() {
	int grad = NULL;
	cout << "Geben Sie ihre Temperatur in Kelvin ein.";
	cin >> grad;
	return grad;
}


//Anfang des Programms
int main() {
	int eingabe = NULL;
	cout << "Successfully booted!" << endl;
	cout << "Willkommen im Temperaturumrechner" << endl;
	while (true) {

		cout << "Voin welcher in welche Temperatur möchten Sie umwandeln? Geben Sie genau 2 Ziffern ein!" << endl;
		cout << "Die erste Ziffer ist die Starteinheit und die zweite Ziffer die Umwandlungseinheit. " << endl;
		cout << "[1]Kelvin / [2]Celsius / [3]Fahrenheit  " << endl;
		cin >> eingabe;

		if (eingabe == 12) {
			float buff = NULL;
			buff = iKelvin() - 273.15f;
			cout << buff << endl;
		}
		if (eingabe == 13) {
			float buff = NULL;
			buff = 32 + ((iKelvin() - 273.15f) * (9 / 5));
			cout << buff << endl;
		}
		if (eingabe == 21) {
			float buff = NULL;
			buff = iCelsius() + 273.15f;
			cout << buff << endl;
		}
		if (eingabe == 23) {
			float buff = NULL;
			buff = 32 + (iCelsius() * (9 / 5));
			cout << buff << endl;
		}
		if (eingabe == 31) {
			float buff = NULL;
			buff = (iFahrenheit() - 32) * (5 / 9) - 273.15f;
			cout << buff << endl;
		}
		if (eingabe == 32) {
			float buff = NULL;
			buff = (iFahrenheit() - 32) * (5 / 9);
			cout << buff << endl;
		}
	}
}