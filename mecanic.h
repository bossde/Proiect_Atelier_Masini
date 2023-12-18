#pragma once
#include "interfata1.h"

class Mecanic:public Angajat{
public:
    Mecanic();
    Mecanic(char*, char*, int* ,int* ,int );
    void afisare();
    double calcul_salariu();
    void editare_angajat(char*, char* ,int* ,int* );
};
