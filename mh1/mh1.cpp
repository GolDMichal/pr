

#include <iostream>
using namespace std;
int main()
{   /*
    int vek = 35;
    if (vek >= 18) {
        cout << "Vstup povoleny" << endl;
    }
    cout << "Toto sa stane vzdy"; 
    int cislo = 1;

    if (cislo == 1) {
        cout << "cislo je jedna" << endl;
    }
    else if (cislo == 2) {
        cout << "cislo je dva" << endl;
    }
    else if (cislo == 3) {
        cout << "cislo je tri" << endl;
    }
    else if (cislo == 4) {
        cout << "cislo je styri" << endl;
    }
    else {
        cout << "zadal si ine cislo" << endl;
    }
    cout << endl << "---------" << endl; */
    const string OkGoogle = "OkGoogle";
    const string HeySiri = "HeySiri";
    cout << "zadaj slovo" << endl;
    string prikaz;
    cin >> prikaz;
    if (prikaz == OkGoogle) {
        cout << "zaz slovo" << endl;
    }
    else if (prikaz == HeySiri) {
        cout << "zaz slovo" << endl;
    }
    else {
        cout << "Chybny prikaz" << endl;
    }
    int hlasitost;
    cout << "zadaj hlasitost" << endl;
    cin >> hlasitost;
    if (prikaz == OkGoogle || prikaz == HeySiri && hlasitost == 0-100) {
        cout << "Zvysujem hlasitost na X" << endl;
    }
    else {
        cout << "Chybny prikaz" << endl;
    }
    cout << endl << "---------" << endl;




    



}


