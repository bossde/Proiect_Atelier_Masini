#include "mecanic.h"
#include "interfata1.h"
#include <iostream>
#include <cstring>
using namespace std;

Mecanic::Mecanic():Angajat {
    strcpy(nume, " ");
    strcpy(prenume, " ");
    for(int i = 0; i < 8; i++){
        this->data_angajarii[i] = 0;
        this->data_nasterii[i] = 0;
    }
    coeficient_salariu = 2;
}

Mecanic::Mecanic(char* nume_tast, char* prenume_tast, int* data_nast_tast, int* data_angajarii_tast):Angajat(){
    strcpy(nume,nume_tast);
    strcpy(prenume,prenume_tast);
    for(int i = 0; i < 8; i++){
        this->data_nasterii[i] = data_nast_tast[i];
        this->data_angajarii[i] = data_angajarii_tast[i];
    }
    coeficient_salariu = 1.5;
}

void Mecanic::afisare() {
    cout << "Nume: " << this->nume << endl;
    cout << "Prenume: " << this->prenume << endl;
    cout << "Data Nasterii: ";
    for(int i = 0; i < 8; i++){
        cout << this->data_nasterii[i];
    }
    cout << endl;
    cout << "Data Angajarii: ";
    for(int i = 0; i < 8; i++){
        cout << this->data_angajarii[i];
    }
    cout << endl;
    cout << "ID: ";
    cout << this->id;
    cout << endl;
}

double Mecanic::calcul_salariu() {
    int an = 0;

    for(int i = 4; i < 8; i++){
        an = an * 10 + data_angajarii[i];
    }

    return (2023 - an) * coeficient_salariu * 1000;
}

void Mecanic::editare_angajat(char* s1, char* s2, int* s3, int* s4) {
    for(int i = 0; i < strlen(s1); i++){
        this->nume[i] = s1[i];
    }

    for(int i = 0; i < strlen(s2); i++){
        this->prenume[i] = s2[i];
    }

    for(int i = 0; i < 8; i++){
        this->data_angajarii[i] = s3[i];
        this->data_nasterii[i] = s4[i];
    }
}

