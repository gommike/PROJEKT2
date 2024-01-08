/*
    Header klasy Motor
*/

//Zabezpieczenie kompilatora - 'header guard' aby nie dolaczac wielokrotnie tego samego naglowka
#ifndef MOTOR_H
#define MOTOR_H

#include "Pojazd.h"

class Motor : public Pojazd {
public:
    Motor(const std::string& marka, const std::string& model, int rokProdukcji, bool czySportowy);

    void wyswietlDane() const override;

    bool czySportowy() const;

private:
    bool sportowy;
};

#endif // MOTOR_H

