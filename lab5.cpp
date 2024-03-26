#include <iostream>
#include <chrono>
#include <thread>
#include<windows.h>
bfkajfjksjkajfk
using namespace std;

int main() {
    setlocale(LC_CTYPE, "Polish");
    int choice;
    int counter = 0;

    do {
        // Wyœwietlanie menu opcji
        cout << "Menu:" << endl;
        cout << "1. EGZAMIN JIPP 2023 - ZOBACZ TERAZ" << endl;
        cout << "2. KOLOKWIA ALGEBRA Z GEOMETRI¥" << endl;
        cout << "3. DYSK 1 ROK" << endl;
        cout << "4. EGZAMIN AiSD" << endl;
        cout << "Wybierz opcjê: ";
        cin >> choice;

        // Obs³uga wyboru u¿ytkownika
        switch (choice) {
        case 1:
            SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
            cout << "ERROR 404" << endl;
            SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN);
            // Tutaj umieœæ kod dla opcji 1
            ++counter;
            if (counter < 6) {
                cout << "Czekam 2 sekundY przed powrotem do menu..." << endl;
                this_thread::sleep_for(chrono::seconds(2)); 
                system("cls"); // Czyszczenie ekranu
            }
            else {
                cout << "Program wraca do pierwszej opcji..." << endl;
                counter = 0;
            }
            break;
        case 2:
             SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
            cout << "DO NAUKI!" << endl;
            SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN);
            // Tutaj umieœæ kod dla opcji 2
            ++counter;
            if (counter < 6) {
                cout << "Czekam 2 sekundY przed powrotem do menu..." << endl;
                this_thread::sleep_for(chrono::seconds(2)); 
                system("cls"); // Czyszczenie ekranu
            }
            else {
                cout << "Program wraca do pierwszej opcji..." << endl;
                counter = 0;
            }
            break;
        case 3:
             SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
            cout << "NIE MA TAK £ATWO." << endl;
            SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN);
            // Tutaj umieœæ kod dla opcji 3
            ++counter;
            if (counter < 6) {
                cout << "Czekam 2 sekundY przed powrotem do menu..." << endl;
                this_thread::sleep_for(chrono::seconds(2)); 
                system("cls"); // Czyszczenie ekranu
            }
            else {
                cout << "Program wraca do pierwszej opcji..." << endl;
                counter = 0;
            }
            break;
        case 4:
             SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
            cout << "SPRÓBUJ PONOWNIE" << endl;
            SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN);
            break;
        default:
            cout << "Nieprawid³owa opcja. Spróbuj ponownie." << endl;
        }
    } while (choice != 4); // Pêtla dzia³a dopóki u¿ytkownik nie wybierze opcji "Wyjœcie"

    return 0;
}
