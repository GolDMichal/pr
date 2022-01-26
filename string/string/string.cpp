#include <string>
#include <iostream>
using namespace std;
int main()
{
    string slovo = "Mount Everest";
    string samohlasky = "aeiouyAEIOUY";
    string spoluhlasky = "bcdfghjklmnpqrstvwxzBCDFGHHJKLMNPQRSTVWXZ";
    string cisla = "0123456789";
    string ine = " ";
    cout << "povodne slovo: " << slovo << endl;
    int psa = 0;
    
    for (int a = 0; a < slovo.length(); a++) {
       
        if (samohlasky.find(slovo[a]) < samohlasky.length()) {
            psa++;
        }
    }
    cout << "pocet samohlasok: " << psa << endl;

    int psh = 0;

    for (int b = 0; b < slovo.length(); b++) {

        if (spoluhlasky.find(slovo[b]) < spoluhlasky.length()) {
            psh++;
        }
    }
    cout << "pocet spoluhlasok: " << psh << endl;

    int pc = 0;

    for (int c = 0; c < slovo.length(); c++) {

        if (cisla.find(slovo[c]) < cisla.length()) {
            pc++;
        }
    }
    cout << "pocet cisel: " << pc << endl;

    int pi = 0;

    for (int d = 0; d < slovo.length(); d++) {

        if (ine.find(slovo[d]) < ine.length()) {
            pi++;
        }
    }
    cout << "pocet inych znakov: " << pi << endl;
    return 0;
}

