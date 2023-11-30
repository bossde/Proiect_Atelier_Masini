#include <iostream>
#include "Director.h"
#include "functii_operationale.h"
using namespace std;

int main() {
    Angajat* *vec = new Angajat*[2];
    char nume[30], prenume[30];
    int data_nasterii[8], data_angajarii[8];

    citire_date(nume,prenume,data_nasterii,data_angajarii);

    vec[0] = new Director(nume,prenume,data_nasterii,data_angajarii);
    vec[0]->afisare();
    vec[1] = new Director(nume,prenume,data_nasterii,data_angajarii);
    vec[1]->afisare();



    return 0;
}
