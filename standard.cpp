#include <iostream>
#include "standard.h"
#include <ctime>

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
        std :: cout << ID[i];
    }

    std :: cout << endl;

    std :: cout << nr_kilometri << std :: endl << anul_fabricatiei << std :: endl;

    if(este_motor_diesel == true){
        std :: cout << "Este motor diesel" << std :: endl;
    }

    else {
        std :: cout << "Nu este motor diesel" << std :: endl;
    }

    if(este_automat == 1){
        std :: cout << "Este automat " << std :: endl;
    }

    else{
        std :: cout << "Nu este automat " << std :: endl;
    }

    std :: cout << std :: endl;
}

double Standard::calcul_polita_asigurare() {
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    double valoare_polita = ((tm.tm_year + 1900) - anul_fabricatiei) * 100;

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

const string Standard::tipMasina() const {
    return "Standard";
}
