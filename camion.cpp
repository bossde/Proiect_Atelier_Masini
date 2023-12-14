#include "camion.h"
#include <iostream>
using namespace std;

Camion::Camion(char* ID_citit, int nr_kilometri_citit, int anul_fabricatiei_citit, bool este_diesel_citit, double tonaj_citit) {
    for(int i = 0; i < 7; i++){
        ID[i] = ID_citit[i];
    }

    nr_kilometri = nr_kilometri_citit;

    anul_fabricatiei = anul_fabricatiei_citit;

    este_motor_diesel = este_diesel_citit;

    tonaj = tonaj_citit;
}

void Camion::afisare() {
    for(int i = 0; i < 7; i++){
        cout << ID[i];
    }

    cout << endl;

    cout << nr_kilometri << endl << anul_fabricatiei << endl;

    if(este_motor_diesel == true){
        cout << "Este motor diesel " << endl;
    }

    else{
        cout << "Nu este motor diesel " << endl;
    }

    cout << tonaj << endl;
}

double Camion::calcul_polita_asigurare() {
    double valoare_polita = (2023 - anul_fabricatiei) * 300;

    if(nr_kilometri > 800000){
        valoare_polita = valoare_polita + 700;
    }

    return valoare_polita;
}

double Camion::calcul_polita_asigurare_discount() {
    double valoare_polita_discount = calcul_polita_asigurare();

    double discount = 15 * valoare_polita_discount / 100;

    return valoare_polita_discount - discount;
}
