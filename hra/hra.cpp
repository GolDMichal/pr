#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int rule(char p, char c) {
    if (p == c) {
        return 0;
    }

    if (p == 'k' && c == 'p') {
        return -1;
    }
    else if (p == 'n' && c == 'p') {
        return 1;
    }
    else if (p == 'p' && c == 'k') {
        return 1;
    }
    else if (p == 'n' && c == 'k') {
        return -1;
    }
    else if (p == 'k' && c == 'n') {
        return 1;
    }
    else if (p == 'p' && c == 'n') {
        return -1;
    }
}

int main() {

    char pc;
    char hrac;
    char pm;
    cout << "\t\t\t\t";
    for (int i = 0; i < 50; i++) {
        cout << "-";
    }
    cout << endl;
    cout << "\t\t\t\t";
    cout << "\t Hra Kamen, Papier, Noznice" << endl;
    cout << "\t\t\t\t";
    for (int i = 0; i < 50; i++) {
        cout << "-";
    }
    cout << endl;
    cout << "\t\t\t\t";
    cout << "\t Pouzi tieto skratky: " << endl;
    cout << "\t\t\t\t";
    cout << "\t\t k - Kamen" << endl << "\t\t\t\t" << "\t\t p - Papier" << endl << "\t\t\t\t" << "\t\t n - Noznice" << endl << "\t\t\t\t" << endl << endl;
    cout << "\t\t\t\t";
    for (int i = 0; i < 50; i++) {
        cout << "-";
    }
    cout << endl;
    do {
        int c = 0;
        srand(time(0));
        c = rand() % 100;
        if (c < 33)
        {
            pc = 'k';
        }
        else if (c > 66)
        {
            pc = 'n';
        }
        else
        {
            pc = 'p';
        }
        cout << "\t\t\t\t";
        cout << "Zadaj svoju volbu: ";
        cin >> hrac;
        int v = rule(hrac, pc);
        if (v == 1) {
            cout << "\t\t\t\t";
            cout << "Vyhral si!" << endl;
        }
        else if (v == -1) {
            cout << "\t\t\t\t";
            cout << "Prehral si! Skus to znova." << endl;
        }
        else {
            cout << "\t\t\t\t";
            cout << "Je to remiza!" << endl;
        }
        cout << "\t\t\t\t";
        cout << "Chces hrat znova?" << endl;
        cout << "\t\t\t\t";
        cout << "Zadaj 'n' aby si hru ukoncil. Zadaj nieco ine na pokracovanie: ";
        cin >> pm;
        cout << "\t\t\t\t";
        for (int i = 0; i < 50; i++) {
            cout << "-";
        }
        cout << endl;
    } while (pm != 'n');

    return 0;
}