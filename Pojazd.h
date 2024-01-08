/*
    Header klasy Pojazd
*/

//Zabezpieczenie kompilatora - 'header guard' aby nie dolaczac wielokrotnie tego samego naglowka
#ifndef POJAZD_H
#define POJAZD_H

#include <string>

class Pojazd {
public:
    //konstruktor klasy Pojazd
    Pojazd(const std::string& marka, const std::string& model, int rokProdukcji);

    //wirtualny destruktor klasy Pojazd - uzywamy virtual bo dziedziczymy
    virtual ~Pojazd();

    //metoda wirtualna do wyswietlania danych o pojezdzie - klasa pochodna dostarcza wlasnej implementacji tej metody wiec musimy uzyc vitural
    virtual void wyswietlDane() const;

    //gettery zmiennych Pojazdu
    std::string getMarka() const;
    std::string getModel() const;
    int getRokProdukcji() const;

private:
    //prywatne zmienne Pojazdu
    std::string marka;
    std::string model;
    int rokProdukcji;
};

#endif

