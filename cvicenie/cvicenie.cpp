

#include <iostream>
using namespace std;
int main()
{
    int slovo;
    cout << "zadaj cislo" << endl; 
    cin >> slovo;
    switch (slovo) {
    case 1:
        cout << "som hladny" << endl;
        break;
    case 2:
        cout << "do zbrane" << endl;
        break;
    case 3:
        cout << "nananananaaaaa" << endl;
        break;
    default:
        cout << "toto slovo nepoznam" << endl;
        break;
    }
    return 0;

}


