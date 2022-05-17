#include <iostream>
#include <time.h>
#include <conio.h>
using namespace std;
enum smer { STOJ = 0, DOLAVA = 1, HOREVLAVO = 2, DOLEVLAVO = 3, DOPRAVA = 4, HOREVPRAVO = 5, DOLEVPRAVO = 6};
class lopta
{
private:
    int x, y;
    int ox, oy;
    smer s;
public:
    lopta(int px, int py)
    {
        ox = px;
        oy = py;
        x = px; y = py;
        s = STOJ;
    }
    void reset()
    {
        x = ox; y = oy;
        s = STOJ;
    }
    void zmensmer(smer s1)
    {
        s = s1;
    }
    void ns()
    {
        s = (smer)((rand() % 6) + 1);
    }
    inline int dx() { return x; }
    inline int dy() { return y; }
    inline smer ds() { return s; }
    void p()
    {
        switch (s)
        {
        case STOJ:
            break;
        case DOLAVA:
            x--;
            break;
        case DOPRAVA:
            x++;
            break;
        case HOREVLAVO:
            x--; y--;
            break;
        case DOLEVLAVO:
            x--; y++;
            break;
        case HOREVPRAVO:
            x++; y--;
            break;
        case DOLEVPRAVO:
            x++; y++;
            break;
        default:
            break;
        }
    }
    friend ostream & operator<<(ostream & o, lopta c)
    {
        o << "lopta [" << c.x << "," << c.y << "][" << c.s << "]";
        return o; 
    }
};
class raketa 
{
private:
    int x, y;
    int ox, oy;
public:
    raketa()
    {
        x = y = 0;
    }
    raketa(int px, int py) : raketa()
    {
        ox = px;
        oy = py;
        x = px;
        y = py;
    }
    inline void reset() { x = ox; y = oy; }
    inline int dx() { return x; }
    inline int dy() { return y; }
    inline void h() { y--; }
    inline void d() { y++; }
    friend ostream& operator<<(ostream& o, raketa c)
    {
        o << "raketa [" << c.x << "," << c.y << "]";
        return o;
    }
};
class gm
{
private:
    int sirka, vyska;
    int skore1, skore2;
    char hore1, dole1, hore2, dole2;
    bool quit;
    lopta * l;
    raketa *h1;
    raketa *h2;
public:
    gm(int si, int v)
    {
        srand(time(NULL));
        quit = false;
        hore1 = 'w'; hore2 = 'i';
        dole1 = 's'; dole2 = 'k';
        skore1 = skore2 = 0;
        sirka = si; vyska = v;
        l = new lopta(si / 2, v / 2);
        h1 = new raketa(1, v / 2 - 3);
        h2 = new raketa(si - 2, v / 2 - 3);
    }
    ~gm()
    {
        delete l, h1, h2;
    }
    void sh(raketa * hrac)
    {
        if (hrac == h1)
            skore1++;
        else if (hrac == h2)
            skore2++;

        l->reset();
        h1->reset();
        h2->reset();
    }
    void k()
    {
        system("cls");
        for (int i = 0; i < sirka + 2; i++)
            cout << "\xB2";
        cout << endl;

        for (int i = 0; i < vyska; i++)
        {
            for (int j = 0; j < sirka; j++)
            {
                int lx = l->dx();
                int ly = l->dy();
                int h1x = h1->dx();
                int h2x = h2->dx();
                int h1y = h1->dy();
                int h2y = h2->dy();

                if (j == 0)
                    cout << "\xB2";

                if (lx == j && ly == i)
                    cout << "O";
                else if (h1x == j && h1y == i)
                    cout << "\xDB";
                else if (h2x == j && h2y == i)
                    cout << "\xDB";

                else if (h1x == j && h1y + 1 == i)
                    cout << "\xDB";
                else if (h1x == j && h1y + 2 == i)
                    cout << "\xDB";
                else if (h1x == j && h1y + 3 == i)
                    cout << "\xDB";

                else if (h2x == j && h2y + 1 == i)
                    cout << "\xDB";
                else if (h2x == j && h2y + 2 == i)
                    cout << "\xDB";
                else if (h2x == j && h2y + 3 == i)
                    cout << "\xDB";
                else
                    cout << " ";

                if (j == sirka - 1)
                    cout << "\xB2";
            }
            cout << endl;
        }

        for (int i = 0; i < sirka + 2; i++)
            cout << "\xB2";
        cout << endl;

        cout << "Hrac 1: " << skore1 << endl << "Hrac 2: " << skore2 << endl;
    }
    void input()
    {
        l->p();

        int lx = l->dx();
        int ly = l->dy();
        int h1x = h1->dx();
        int h2x = h2->dx();
        int h1y = h1->dy();
        int h2y = h2->dy();

        if (_kbhit())
        {
            char current = _getch();
            if (current == hore1)
                if (h1y > 0)
                    h1->h();
            if (current == hore2)
                if (h2y > 0)
                    h2->h();
            if (current == dole1)
                if (h1y + 4 < vyska)
                    h1->d();
            if (current == dole2)
                if (h2y + 4 < vyska)
                    h2->d();

            if (l->ds() == STOJ)
                l->ns();

            if (current == 'q')
                quit = true;
        }
    }
    void fyzika()
    {
        int lx = l->dx();
        int ly = l->dy();
        int h1x = h1->dx();
        int h2x = h2->dx();
        int h1y = h1->dy();
        int h2y = h2->dy();

        
        for (int i = 0; i < 4; i++)
            if (lx == h1x + 1)
                if (ly == h1y + i)
                    l->zmensmer((smer)((rand() % 3) + 4));


        for (int i = 0; i < 4; i++)
            if (lx == h2x - 1)
                if (ly == h2y + i)
                    l->zmensmer((smer)((rand() % 3) + 1));

        
        if (ly == vyska - 1)
            l->zmensmer(l->ds() == DOLEVPRAVO ? HOREVPRAVO : HOREVLAVO);

        if (ly == 0)
            l->zmensmer(l->ds() == HOREVPRAVO ? DOLEVPRAVO : DOLEVLAVO);
        
        if (lx == sirka - 1)
            sh(h1);

        if (lx == 0)
            sh(h2);
    }
    void b()
    {
        while (!quit)
        {
            k();
            input();
            fyzika();
        }
    }

};
int main()
{
    gm c(40, 20);
    c.b();
    return 0;
}