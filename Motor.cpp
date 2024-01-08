/*
    Plik Ÿród³owy klasy Pojazd
*/

#include "Motor.h"
#include <iostream>

Motor::Motor(const std::string& marka, const std::string& model, int rokProdukcji, bool czySportowy)
    : Pojazd(marka, model, rokProdukcji), sportowy(czySportowy) {}

void Motor::wyswietlDane() const {
    Pojazd::wyswietlDane();
    std::cout << "Czy sportowy: " << (sportowy ? "Tak" : "Nie") << std::endl;
}

bool Motor::czySportowy() const {
    return sportowy;
}

