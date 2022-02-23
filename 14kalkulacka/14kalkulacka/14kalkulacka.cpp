#include <iostream>
using namespace std;


void plus1(float a, float b) {
	float vysledok = a + b;
	cout << "Vysledok:" << vysledok << endl;
}
void krat(float a, float b) {
	float vysledok = a * b;
	cout << "Vysledok:" << vysledok << endl;
}
void minus1(float a, float b) {
	float vysledok = a - b;
	cout << "Vysledok:" << vysledok << endl;
}
void deleno(float a, float b) {
	float vysledok = a / b;
	cout << "Vysledok:" << vysledok << endl;
}



int main() {
	int  c = 5;
	while (c == 5) {
		cout << "KALKULACKA" << endl;
		float a, b;
		char znamienko;
		cout << "Zadaj prve cislo:" << endl;
		cin >> a;
		cout << "Zadaj znamienko:" << endl;
		cin >> znamienko;
		int z = znamienko;
		cout << "Zadaj druhe cislo:" << endl;
		cin >> b;

		if (z == 47 && b == 0) {
			cout << "nulou sa neda delit" << endl;
		}
		else {
			switch (z) {
			case 43:
				plus1(a, b);
				break;
			case 42:
				krat(a, b);
				break;
			case 45:
				minus1(a, b);
				break;
			case 47:
				deleno(a, b);
				break;
			default:
				cout << "toto neni cislo" << endl;
			}
			const string ano = "ano";
			const string nie = "nie";
			cout << "novy priklad?" << endl;
			cout << "ano/nie" << endl;
			string o;
			cin >> o;
			if (o == ano) {
				continue;
			}
			else if (o == nie) {
				return 0;
			}
			else {
				cout << "ERROR" << endl;
			}
			return 0;
		}
	}       
}