

#include <iostream>
using namespace std;

int main()
{
    const string a = "a";
    const string b = "b";
    const string c = "c";
    const string d = "d";
    cout << "Aku farbu ma slnko? Po A modru, po B zltu, po C cervenu a po D zelenu " << endl;
    string odpoved;
    cin >> odpoved;
    if (odpoved == b) {
        cout << "spravne" << endl;
    }
    else {
        cout << "nespravne" << endl;
        return 0;
    }
    
    cout << "Aku farbu ma trava? Po A modru, po B zltu, po C cervenu a po D zelenu " << endl;
    string odpoved1;
    cin >> odpoved1;
    if (odpoved1 == d) {
        cout << "spravne" << endl;
    }
    else {
        cout << "nespravne" << endl;
        return 0;
    }
    
    cout << "Aku farbu ma obloha? Po A modru, po B zltu, po C cervenu a po D zelenu " << endl;
    string odpoved2;
    cin >> odpoved2;
    if (odpoved2 == a) {
        cout << "spravne" << endl;
    }
    else {
        cout << "nespravne" << endl;
        return 0;
    }
    return 0;
    }
    


