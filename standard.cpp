#include <iostream>
#include "standard.h"
using namespace std;

Standard::Standard(char* ID_citit, int nr_km_cititi, int anul_fabricatiei_citit, bool este_motor_diesel_citit, bool este_automat_citit){
    for(int i = 0; i < 7; i++){
        ID[i] = ID_citit[i];
    }

    nr_kilometri = nr_km_cititi;

    anul_fabricatiei = anul_fabricatiei_citit;

    este_motor_diesel = este_motor_diesel_citit;

    este_automat = este_automat_citit;
}

void Standard::afisare() {
    for(int i = 0; i < 7; i++){
        cout << ID[i];
    }

    cout << endl;

    cout << nr_kilometri << endl << anul_fabricatiei << endl;

    if(este_motor_diesel == true){
        cout << "Este motor diesel" << endl;
    }

    else {
        cout << "Nu este motor diesel" << endl;
    }

    if(este_automat == 1){
        cout << "Este automat " << endl;
    }

    else{
        cout << "Nu este automat " << endl;
    }

    cout << endl;
}

double Standard::calcul_polita_asigurare() {
    double valoare_polita = (2023 - anul_fabricatiei) * 100;

    if(este_motor_diesel == 1){
        valoare_polita = valoare_polita + 500;
    }

    if(nr_kilometri > 200000){
        valoare_polita = valoare_polita + 500;
    }

    return valoare_polita;
}

double Standard::calcul_polita_asigurare_discount() {
    double valoare_polita_discount = calcul_polita_asigurare();

    double discount = 5 * valoare_polita_discount / 100;

    return valoare_polita_discount - discount;
}
