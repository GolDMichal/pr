

#include <iostream>
using namespace std;
int main()
{
    int x;
    int y;
    cout << "zadaj x" << endl;
    cin >> x;
    cout << "zadaj y" << endl;
    cin >> y;
    do {
        cout << x << endl;
        x++;
        ++x;
    } while (x <= y);

    return 0;
}
    


