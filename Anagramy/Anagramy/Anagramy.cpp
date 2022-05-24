#include<iostream>
#include<cstring>
#include <windows.h>
using namespace std;

bool czy_anagram(char* a, char* b)
{
    int dl1 = strlen(a), dl2 = strlen(b);
    if (dl1 != dl2)return false;
    int licz[127] = {};
    for (int i = 0; i < dl1; i++)
        licz[a[i]]++;
    for (int i = 0; i < dl1; i++)
        licz[b[i]]--;

    for (int i = 0; i < 127; i++)
        if (licz[i] != 0)
            return false;
    return true;
}

int main()
{
    bool Program=true;
    int wyb;
    while (Program==true)
    {
        system("cls");
        cout << "Anagramy Program\n";
        cout << "1:Anagramy\n";
        cout << "2:Autor\n";
        cout << "3:Wyjdz\n";
        cin >> wyb;
        if (wyb == 1) {
            system("cls");
            char a[101], b[101];
            cout << "Podaj dwa wyrazy:\n";
            cin >> a >> b;

            if (czy_anagram(a, b))
                cout << "Podane wyrazy sa anagramami\n";
            else
                cout << "Podane wyrazy nie są anagramami\n";
            Sleep(5000);
        }
        else if (wyb == 2) {
            system("cls");
            cout << "Maxwell Broll 1B\n";
            Sleep(5000);
        }
        else if (wyb == 3)Program = false;
        else {
            cout << "Błąd";
            Sleep(1000);
            system("cls");
        }
    }
}