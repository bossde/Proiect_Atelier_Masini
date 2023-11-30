#pragma once
#include "interfata1.h"

class Asistent:public Angajat{
public:
    Asistent();
    Asistent(char*, char*, int*, int* );
    void afisare();
    double calcul_salariu();
    void editare_angajat(char* ,char*, int*, int*);
};
