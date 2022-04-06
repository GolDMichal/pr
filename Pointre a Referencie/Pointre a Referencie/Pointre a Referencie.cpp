#include <iostream>
using namespace std;

void swap(int *a, int *b) {
    int c = *a;
    *a = *b;
    *b = c;
}

void napln_pole(int pole[], int dlzka) {
    for (int i = 0; i < dlzka; i++) {
        pole[i] = i + 1;
    }
}
int main()
{
    int a;
    a = 56;
    cout << "Premenna a ma hodnotu: " << a << " a je v pameti ulozena na adrese " << &a << endl;

    int b = 99;
    int* p_b = &b;
    *p_b = 15;
    cout << "Ukazatel p_b ma hodnotu: " << p_b << " a ukazuje na hodnotu " << *p_b << endl;
    cout << "Hodnota ulozena v b je " << b << endl;

    int c1 = 10;
    int c2 = 20;
    swap(c1, c2);
    cout << "V c1 je cislo " << c1 << " a v c2 je cislo " << c2 << endl;

    int pole[10];
    int* p_pole = pole;
    cout << &pole;
    cout << p_pole;

    *p_pole = NULL;
    *pole = NULL;

    int i = 99;
    int* p_i = &i;
    *p_i = 15;
    cout << "ukazatel p_i ma hodnotu " << p_i << " a ukazuje na hodnotu " << *p_i << endl;
    cout << "hodnota ulozena v i je " << i << endl;

    bool bb = true;
    bool* p_bb = &bb;
    *p_bb = false;
    cout << "ukazatel p_bb ma hodnotu " << p_bb << " a ukazuje na hodnotu " << *p_bb << endl;
    cout << "hodnota ulozena v bb je " << bb << endl;

    return 0;
}
