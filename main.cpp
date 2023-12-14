#include <iostream>
#include "Director.h"
#include "functii_operationale.h"
#include "functii_operationale.cpp"
#include "camion.h"
#include "camion.cpp"
#include "autobuze.h"
#include "autobuze.cpp"
#include "standard.h"
#include "standard.cpp"
using namespace std;

int main() {
    Angajat* *vec = new Angajat*[2];
    char nume[30], prenume[30];
    int data_nasterii[8], data_angajarii[8];

    //citire_date(nume,prenume,data_nasterii,data_angajarii);

    /*vec[0] = new Director(nume,prenume,data_nasterii,data_angajarii);
    vec[0]->afisare();
    vec[1] = new Director(nume,prenume,data_nasterii,data_angajarii);
    vec[1]->afisare();
     */

    Masina* *vec2 = new Masina*[2];
    char ID[7];
    int nr_km = 900000;
    int anul_fabricatiei = 2014;
    bool este_diesel = true;

    double tonaj = 7.5;

    for(int i = 0; i < 7; i++){
        ID[i] = 'a' + i;
    }

    vec2[0] = new Standard(ID,nr_km,anul_fabricatiei,este_diesel,true);
    vec2[0]->afisare();
    vec2[1] = new Standard(ID,nr_km,anul_fabricatiei,este_diesel,false);
    vec2[1]->afisare();

    return 0;
}
