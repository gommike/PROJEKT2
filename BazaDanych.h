/*
    Header klasy BazaDanych
*/

//Zabezpieczenie kompilatora - 'header guard' aby nie dolaczac wielokrotnie tego samego naglowka
#ifndef BAZADANYCH_H
#define BAZADANYCH_H

#include "Pojazd.h"
#include <vector>

class BazaDanych {
public:
    void dodajPojazd(Pojazd* pojazd);
    void usunPojazd(const std::string& marka, const std::string& model);
    void wyswietlWszystkiePojazdy() const;
    void zapiszDoPliku() const;
    void wczytajZPliku();

    //Definicja funkcji dla obiektu typu Pojazd* (wskaznika na pojazd) begin i end uzywanych do wskazania poczatku/konca kontenera - konieczne bylo dla czyszczenia pamieci
//    std::vector<Pojazd*>::iterator begin() {
//        return pojazdy.begin();
//    }
//
//    std::vector<Pojazd*>::iterator end() {
//        return pojazdy.end();
//    }


private:
    //kontener pojazdy przechowujacy obiekty typu wskaznik do Pojazd
    std::vector<Pojazd*> pojazdy;
};

#endif // BAZADANYCH_H

