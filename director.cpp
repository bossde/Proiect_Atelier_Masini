#include "director.h"
#include "interfata1.h"
#include <iostream>
#include <cstring>
using namespace std;

Director::Director():Angajat() {
    strcpy(nume, " ");
    strcpy(prenume, " ");
    for(int i = 0; i < 8; i++){
        this->data_angajarii[i] = 0;
        this->data_nasterii[i] = 0;
    }
    coeficient_salariu = 2;
}

Director::Director(char* nume_tastatura, char* prenume_tastatura, int* data_nasterii_tastatura, int* data_angajarii_tastatura):Angajat(){
    strcpy(nume,nume_tastatura);
    strcpy(prenume,prenume_tastatura);
    for(int i = 0; i < 8; i++){
        this->data_nasterii[i] = data_nasterii_tastatura[i];
        this->data_angajarii[i] = data_angajarii_tastatura[i];
    }
    coeficient_salariu = 2;
}

void Director::afisare(){
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

double Director::calcul_salariu() {
    int an = 0;
    for(int i = 4; i < 8; i++){
        an = an * 10 + data_angajarii[i];
    }

    return (2023 - an) * coeficient_salariu * 1000;
}

void Director::editare_angajat(char* s1, char* s2, int* s3, int* s4) {
    for(int i = 0; i < strlen(s1); i++){
        this->nume[i] = s1[i];
        this->prenume[i] = s2[i];
    }

    for(int i = 0; i < 8; i++){
        this->data_angajarii[i] = s3[i];
        this->data_nasterii[i] = s4[i];
    }
}


