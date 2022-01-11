

#include <iostream>
using namespace std;
int main()
{
    int vaha;
    int vyska;
    bool bmi;
    cout << "zadaj vahu" << endl;
    cin >> vaha;
    cout << "zadaj vysku" << endl;
    cin >> vyska;
    bmi = vaha / (vyska * vyska);
    cout << "tvoje bmi je" << bmi << endl;
    if (bmi < 18.5) {
        cout << "mas podvyzivu" << endl;
    }
    else if (18.5 < bmi < 25) {
        cout << "si v norme" << endl;
    }
    else if (bmi > 25) {
        cout << "mas nadvahu" << endl;
    return 0;
}

