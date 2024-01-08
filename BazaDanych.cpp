/*
    Plik Ÿród³owy klasy BazaDanych
*/

#include "BazaDanych.h"
#include <fstream>
#include <iostream>

//Wrzuca nowy pojazd podany w polach funkcji do wektora pojazdy
void BazaDanych::dodajPojazd(Pojazd* pojazd) {
    pojazdy.push_back(pojazd);
}

//iteracja przez wektor 'pojazdy'
//sprawdzanie czy wskaznik na iterator 'i' ma taka sama marke i model
//usuwanie obiektu pod iteratorem 'i'
//usuwanie wskaznika na obiekt 'i'
void BazaDanych::usunPojazd(const std::string& marka, const std::string& model) {
    for (auto i = pojazdy.begin(); i != pojazdy.end(); ++i) {
        if ((*i)->getMarka() == marka && (*i)->getModel() == model) {
            delete *i;
            pojazdy.erase(i);
            break;
        }
    }
}

//iteracja po wektorze pojazdy
//uzycie metody wyswietlDane na obiekcie pojazd
void BazaDanych::wyswietlWszystkiePojazdy() const {
    for (const auto& pojazd : pojazdy) {
        pojazd->wyswietlDane();
        std::cout << "---------------------\n";
    }
}

void BazaDanych::zapiszDoPliku() const {
    std::ofstream plik("dataWprowadzone.txt");

    if (plik.is_open()) {
        for (const auto& pojazd : pojazdy) {
            plik << pojazd->getMarka() << " " << pojazd->getModel() << " " << pojazd->getRokProdukcji() << "\n";
        }

        plik.close();
    } else {
        std::cerr << "Nie mozna otworzyc pliku do zapisu!\n";
    }
}

void BazaDanych::wczytajZPliku() {
    std::ifstream plik("data.txt");

    if (plik.is_open()) {
        std::string marka, model;
        int rokProdukcji;

        while (plik >> marka >> model >> rokProdukcji) {
            pojazdy.push_back(new Pojazd(marka, model, rokProdukcji));
        }

        plik.close();
    } else {
        std::cerr << "Nie mozna otworzyc pliku do odczytu!\n";
    }
}



