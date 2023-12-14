#pragma once
#include "interfata2.h"
#include <stdbool.h>

class Standard: public Masina{
    bool este_automat;
public:
    Standard() = default;
    Standard(char* ,int ,int ,bool, bool);
    void afisare();
    double calcul_polita_asigurare();
    double calcul_polita_asigurare_discount();
};
