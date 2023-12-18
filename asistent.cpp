#include "asistent.h"
#include <iostream>
#include <cstring>

Asistent::Asistent():Angajat(){
    strcpy(nume, " ");
    strcpy(prenume, " ");
    for(int i = 0; i < 8; i++){
        this->data_angajarii[i] = 0;
        this->data_nasterii[i] = 0;
    }
    coeficient_salariu = 1;
    timp_estimat = 0;
}

Asistent::Asistent(char* nume_tast, char* prenume_tast, int* data_nasterii_tast, int* data_angajarii_tast, int timp_estimat_tast):Angajat(){
    strcpy(nume,nume_tast);
    strcpy(prenume,prenume_tast);
    for(int i = 0; i < 8; i++){
        this->data_nasterii[i] = data_nasterii_tast[i];
        this->data_angajarii[i] = data_angajarii_tast[i];
    }
    coeficient_salariu = 1;
    timp_estimat = timp_estimat_tast;
}

double Asistent::calcul_salariu() {
    int an = 0;

    for(int i = 4; i < 8; i++){
        an = an * 10 + data_angajarii[i];
    }

    return (2023 - an) * coeficient_salariu * 1000;
}

void Asistent::afisare() {
    std :: cout << "Nume: " << this->nume << std :: endl;
    std :: cout << "Prenume: " << this->prenume << std :: endl;
    std :: cout << "Data Nasterii: ";
    for(int i = 0; i < 8; i++){
        std :: cout << this->data_nasterii[i];
    }
    std :: cout << std :: endl;
    std :: cout << "Data Angajarii: ";
    for(int i = 0; i < 8; i++){
        std :: cout << this->data_angajarii[i];
    }
    std :: cout << std :: endl;
    std :: cout << "ID: ";
    std :: cout << this->id;
    std :: cout << std :: endl;
}

void Asistent::editare_angajat(char* nume_nou, char* prenume_nou, int* data_nasterii_noua, int* data_angajarii_noua) {
    for(int i = 0; i < strlen(nume_nou); i++){
        this->nume[i] = nume_nou[i];
    }

    for(int i = 0; i < strlen(prenume_nou); i++){
        this->prenume[i] = prenume_nou[i];
    }

    for(int i = 0; i < 8; i++){
        this->data_angajarii[i] = data_angajarii_noua[i];
        this->data_nasterii[i] = data_nasterii_noua[i];
    }
}
