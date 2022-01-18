
#include <iostream>
using namespace std;
int main()
{
	for (int a = 0; a < 4; a++) {
		for (int b = 0; b <= (3 - a); b++) {
			cout << "*";
		}

		cout << endl;
	}
	cout << "   " << endl;
	for (int c = 4; c > 0; c--) {
		for (int d = 0; d <= (4 - c); d++) {
			cout << "*";
		}

		cout << endl;
	}
    return 0;
}

