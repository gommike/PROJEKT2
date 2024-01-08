/*
    Header klasy Osobowy
*/

//Zabezpieczenie kompilatora - 'header guard' aby nie dolaczac wielokrotnie tego samego naglowka
#ifndef OSOBOWY_H
#define OSOBOWY_H

#include "Pojazd.h"

//Definicja klasy osobowy dziedziczaca po pojazd
class Osobowy : public Pojazd {
public:
    //konstruktor
    Osobowy(const std::string& marka, const std::string& model, int rokProdukcji, int iloscMiejsc);

    //const - nie chcemy zmieniac stanu obiektu na ktorym jest wywolywane, override - funkcja jest zamirzonym nadpisaniem funkcji wirtualnej klasy bazowej. Finalnie klasa deklaruje metode, zaznacza wlasna implementacje
    //dobre techniki dla wirtualnych i dziedziczenia
    void wyswietlDane() const override;

    int getIloscMiejsc() const;

private:
    int iloscMiejsc;
};

#endif // OSOBOWY_H

