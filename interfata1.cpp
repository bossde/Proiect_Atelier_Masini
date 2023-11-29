// Angajat.cpp
#include "interfata1.h"

int Angajat::id = 0;
Angajat::Angajat(){
    id++;
}

Angajat::~Angajat() {
    id--;
}

