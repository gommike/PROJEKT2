#include "BazaDanych.h"
#include "Osobowy.h"
#include "Motor.h"
#include <iostream>

int main() {
    BazaDanych baza;

    //Wczytywanie danych z pliku data.txt
    int control;
    std::cout<<"Czy wczytac z pliku (0/1)?\n";
    std::cin>>control;

    if (control==1){
        baza.wczytajZPliku();
    }

    //Interfejs uzytkownika
    int opcja;
    do {
        std::cout << "\n1. Dodaj pojazd\n";
        std::cout << "2. Usun pojazd\n";
        std::cout << "3. Wyswietl wszystkie pojazdy\n";
        std::cout << "4. Zapisz do pliku\n";
        std::cout << "0. Zakoncz\n";

        std::cout << "Wybierz opcje: ";
        std::cin >> opcja;

        //Wyniki wyboru
        switch (opcja) {
            //Dodaj pojazd
            case 1: {
                int wybor;
                int rokProdukcji;
                std::string marka, model;

                std::cout << "\n1. Dodaj osobowy\n";
                std::cout << "2. Dodaj motor\n";
                std::cin >> wybor;
                std::cout << "Podaj marke: ";
                std::cin >> marka;
                std::cout << "Podaj model: ";
                std::cin >> model;
                std::cout << "Podaj rok produkcji: ";
                std::cin >> rokProdukcji;

                //Jezeli osobowy - podaj ilosc miejsc i dodaj do bazy
                if (wybor == 1) {
                    int iloscMiejsc;
                    std::cout << "Podaj ilosc miejsc: ";
                    std::cin >> iloscMiejsc;
                    baza.dodajPojazd(new Osobowy(marka, model, rokProdukcji, iloscMiejsc));
                }
                //Jezeli motor - podaj czy sportowy i dodaj do bazy
                else if (wybor == 2) {
                    bool czySportowy;
                    std::cout << "Czy motor jest sportowy (0/1): ";
                    std::cin >> czySportowy;
                    baza.dodajPojazd(new Motor(marka, model, rokProdukcji, czySportowy));
                }
                else {
                    std::cout << "Niepoprawny wybor\n";
                }
                break;
            }
            //Usun pojazd
            case 2: {
                std::string marka, model;
                std::cout << "\nPodaj marke pojazdu do usuniecia: ";
                std::cin >> marka;
                std::cout << "Podaj model pojazdu do usuniecia: ";
                std::cin >> model;
                baza.usunPojazd(marka, model);
                break;
            }
            //Wyswietl wszysktie pojazdy
            case 3:
                std::cout<<"\n";
                baza.wyswietlWszystkiePojazdy();
                break;
            //zapisz do pliku dataWprowadzone.txt
            case 4:
                std::cout<<"\n";
                baza.zapiszDoPliku();
                break;
            //koniec programu
            case 0:
                std::cout<<"\n";
                std::cout << "Koniec programu\n";
                break;
            default:
                std::cout << "Niepoprawna opcja\n";
        }

    }
    while (opcja != 0);

    // Czyszczenie pamieci po programie
//    for (auto pojazd : baza) {
//        delete pojazd;
//    }


    return 0;
}
