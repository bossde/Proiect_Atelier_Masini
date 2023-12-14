#pragma once

class Masina {
protected:char ID[7];
    int nr_kilometri;
    int anul_fabricatiei;
    bool este_motor_diesel;
public:
    virtual void afisare() = 0;
    virtual double calcul_polita_asigurare() = 0;
    virtual double calcul_polita_asigurare_discount() = 0;
    virtual ~Masina(){};
};