#include <iostream>
using namespace std;

char square[10] = { 'o','1','2','3','4','5','6','7','8','9' };

int checkwin();
void board();

int main()
{
    int h = 1, i, v;
    char z;
    do
    {
        board();
        h = (h % 2) ? 1 : 2;
        cout << "Hrac " << h << ", vloz cislo:  ";
        cin >> v;
        z = (h == 1) ? 'X' : 'O';

        if (v == 1 && square[1] == '1')
            square[1] = z;
        else if (v == 2 && square[2] == '2')
            square[2] = z;
        else if (v == 3 && square[3] == '3')
            square[3] = z;
        else if (v == 4 && square[4] == '4')
            square[4] = z;
        else if (v == 5 && square[5] == '5')
            square[5] = z;
        else if (v == 6 && square[6] == '6')
            square[6] = z;
        else if (v == 7 && square[7] == '7')
            square[7] = z;
        else if (v == 8 && square[8] == '8')
            square[8] = z;
        else if (v == 9 && square[9] == '9')
            square[9] = z;
        else
        {
            cout << "Mozes davat cisla iba od 1 po 9 ";
            h--;
            cin.ignore();
            cin.get();
        }
        i = checkwin();
        h++;
    } while (i == -1);
    board();
    if (i == 1)
        cout << "\aHrac " << --h << " vyhrava ";
    else
        cout << "\aRemiza";
    cin.ignore();
    cin.get();
    return 0;
}
int checkwin()
{
    if (square[1] == square[2] && square[2] == square[3])
        return 1;
    else if (square[4] == square[5] && square[5] == square[6])
        return 1;
    else if (square[7] == square[8] && square[8] == square[9])
        return 1;
    else if (square[1] == square[4] && square[4] == square[7])
        return 1;
    else if (square[2] == square[5] && square[5] == square[8])
        return 1;
    else if (square[3] == square[6] && square[6] == square[9])
        return 1;
    else if (square[1] == square[5] && square[5] == square[9])
        return 1;
    else if (square[3] == square[5] && square[5] == square[7])
        return 1;
    else if (square[1] != '1' && square[2] != '2' && square[3] != '3'
        && square[4] != '4' && square[5] != '5' && square[6] != '6'
        && square[7] != '7' && square[8] != '8' && square[9] != '9')
        return 0;
    else
        return -1;
}
void board()
{
    system("cls");
    cout << "\n\n\tPiskvorky\n\n";
    cout << "Hrac 1 (X)     -     Hrac 2 (O)" << endl << endl;
    cout << endl;
    cout << "     |     |     " << endl;
    cout << "  " << square[7] << "  |  " << square[8] << "  |  " << square[9] << endl;
    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;
    cout << "  " << square[4] << "  |  " << square[5] << "  |  " << square[6] << endl;
    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;
    cout << "  " << square[1] << "  |  " << square[2] << "  |  " << square[3] << endl;
    cout << "     |     |     " << endl << endl;
}




