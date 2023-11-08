#include <iostream>
using namespace std;
int i,w,j,k;
int t;
void printw(int);
void printk(int);
int main()
{
    cout << "podaj ilosc wierszy\n";
    cin >> w;
    cout << "podaj ilosc kolumn\n";
    cin >> k;
    for (i = 0; i < w; i++) {
        cout << "* ";
    }
        for (j = 0; j < k; j++) {
            cout << ". ";

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