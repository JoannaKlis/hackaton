#include <iostream>
#include <chrono>
#include <thread>

using namespace std;

int main() {
    setlocale(LC_CTYPE, "Polish");
    int choice;
    int counter = 0;

    do {
        // Wy�wietlanie menu opcji
        cout << "Menu:" << endl;
        cout << "1. EGZAMIN JIPP 2023 - ZOBACZ TERAZ" << endl;
        cout << "2. KOLOKWIA ALGEBRA Z GEOMETRI�" << endl;
        cout << "3. DYSK 1 ROK" << endl;
        cout << "4. EGZAMIN AiSD" << endl;
        cout << "Wybierz opcj�: ";
        cin >> choice;

        // Obs�uga wyboru u�ytkownika
        switch (choice) {
        case 1:
            cout << "ERROR 404" << endl;
            // Tutaj umie�� kod dla opcji 1
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
            cout << "DO NAUKI!" << endl;
            // Tutaj umie�� kod dla opcji 2
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
            cout << "NIE MA TAK �ATWO." << endl;
            // Tutaj umie�� kod dla opcji 3
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
            cout << "SPR�BUJ PONOWNIE" << endl;
            break;
        default:
            cout << "Nieprawid�owa opcja. Spr�buj ponownie." << endl;
        }
    } while (choice != 4); // P�tla dzia�a dop�ki u�ytkownik nie wybierze opcji "Wyj�cie"

    return 0;
}