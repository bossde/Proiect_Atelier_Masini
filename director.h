#include "interfata1.h"
#pragma once

class Director:public Angajat{
public:
    Director();
    Director(char* , char* , int* , int* );
    void afisare();
    double calcul_salariu();
    void editare_angajat(char*, char* ,int* ,int* );
};
