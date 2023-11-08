#include <iostream>
using namespace std;
int i,w,j,k;
int t;
void printplanszaw(int);
void printplanszak(int);
int main()
{
    int wiersze;
    int kolumny;
    cout << "podaj ilosc wierszy\n";
    cin >> wiersze;
    cout << "podaj ilosc kolumn\n";
    cin >> kolumny;
    printplanszaw(wiersze);
    printplanszak(kolumny);

    void printplanszaw(int w); {
        for (i = 0; i < w / 2; i++) {
            cout << "* ";
        }
    }
    void printplanszak(int k); {
        for (j = 0; j < k / 2; j++) {
            cout << ". ";
        }
    }
}





















/*#include <iostream>

using namespace std;

void drukujLinie(int);
void drukujLinie2(int);
void drukujSzachownice(int);
int main()
{
    int szerokosc;
    cout << "Podaj szerokosc szachownicy: ";
    cin >> szerokosc;
    drukujSzachownice(szerokosc);

}
void drukujSzachownice(int x)
{
    for (int i = 0; i < x / 2; i++)
    {
        drukujLinie(x);
        drukujLinie2(x);
    }
}
void drukujLinie(int y)
{
    for (int i = 1; i <= y / 2; i++)
    {
        cout << "*";
    }
    cout << endl;
}
void drukujLinie2(int z)
{
    for (int i = 1; i <= z / 2; i++)
    {
        cout << ".";
    }
    cout << endl;
}*/