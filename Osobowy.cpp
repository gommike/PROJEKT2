/*
    Plik Ÿród³owy klasy Osobowy
*/

#include "Osobowy.h"
#include <iostream>

//konstruktor klasy Osobowy - dziedziczony z pojazdu - Osobowy:Pojazd
Osobowy::Osobowy(const std::string& marka, const std::string& model, int rokProdukcji, int iloscMiejsc)
: Pojazd(marka, model, rokProdukcji), iloscMiejsc(iloscMiejsc) {}

void Osobowy::wyswietlDane() const {
    Pojazd::wyswietlDane();
    std::cout << "Ilosc miejsc: " << iloscMiejsc << std::endl;
}

int Osobowy::getIloscMiejsc() const {
    return iloscMiejsc;
}

