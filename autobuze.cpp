#include "autobuze.h"
#include <iostream>
#include <ctime>
using namespace std;

Autobuz::Autobuz(char* ID_citit, int anul_fabricatiei_citit, int nr_kilometri_citit , bool este_diesel_citit, int nr_locuri_citit) {
    for(int i = 0; i < 7; i++){
        ID[i] = ID_citit[i];
    }

    anul_fabricatiei = anul_fabricatiei_citit;
    nr_kilometri = nr_kilometri_citit;
    este_motor_diesel = este_diesel_citit;

    nr_locuri = nr_locuri_citit;
}

void Autobuz::afisare() {
    for(int i = 0; i < 7; i++){
        cout << ID[i];
    }

    cout << endl;

    cout << nr_kilometri << endl << anul_fabricatiei << endl;

    if(este_motor_diesel == true){
        cout << "Este motor diesel" << endl;
    }

    else{
        cout << "Nu este motor diesel " << endl;
    }

    cout << nr_locuri << endl;
}

double Autobuz::calcul_polita_asigurare() {
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    double valoare_polita = ((tm.tm_year + 1900) - anul_fabricatiei) * 200;

    if(este_motor_diesel == 1){
        valoare_polita = valoare_polita + 1000;
    }

    if(nr_kilometri > 200000){
        valoare_polita = valoare_polita + 1000;
        return valoare_polita;
    }

    if(nr_kilometri > 100000){
        valoare_polita = valoare_polita + 500;
    }

    return valoare_polita;
}

double Autobuz::calcul_polita_asigurare_discount() {
    double valoare_polita_discount = calcul_polita_asigurare();

    double discount = valoare_polita_discount / 10;

    return valoare_polita_discount - discount;
}

const string Autobuz::tipMasina() const {
    return "Autobuz";
}
