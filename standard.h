#pragma once
#include "interfata2.h"

class Standard: public Masina{
    char mod_transmisie[7];
public:
    Standard() = default;
    Standard(char* ,int ,int* ,bool);
    double polita_asigurare();
    double polita_asigurare_discount();
};
