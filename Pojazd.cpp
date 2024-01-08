/*
    Plik Ÿród³owy klasy Pojazd
*/

#include "Pojazd.h"
#include <iostream>

//Deklaracja konstruktora odbyla sie w .h wiec tu uzywamy pelnego zasiegu 'zrodla' definicji
Pojazd::Pojazd(const std::string& marka, const std::string& model, int rokProdukcji)
    : marka(marka), model(model), rokProdukcji(rokProdukcji) {}

Pojazd::~Pojazd(){}

void Pojazd::wyswietlDane() const {
    std::cout << "Marka: " << marka << "\nModel: " << model << "\nRok produkcji: " << rokProdukcji << std::endl;
}

std::string Pojazd::getMarka() const {
    return marka;
}

std::string Pojazd::getModel() const {
    return model;
}

int Pojazd::getRokProdukcji() const {
    return rokProdukcji;
}

