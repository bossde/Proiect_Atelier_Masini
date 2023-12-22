#include "interfata2.h"
#pragma once
#include <string>

class Autobuz: public Masina{
    int nr_locuri;
public:
    Autobuz() = default;
    Autobuz(char* , int , int , bool ,int );
    void afisare();
    double calcul_polita_asigurare();
    double calcul_polita_asigurare_discount();
    const std::string tipMasina() const;
};
