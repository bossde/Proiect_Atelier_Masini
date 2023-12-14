#include "interfata2.h"
#pragma once

class Camion: public Masina{
    double tonaj;
public:
    Camion() = default;
    Camion(char* , int, int, bool, double);
    void afisare();
    double calcul_polita_asigurare();
    double calcul_polita_asigurare_discount();
};
