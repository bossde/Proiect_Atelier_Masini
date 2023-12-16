#include "atelier.h"
#include <iostream>

Atelier::Atelier() {
    numAngajati = 0;
    numMasini = 0;

    for(int i = 0; i < MAX_ANGAJATI; i++){
        angajati[i] = nullptr;
    }

    for(int i = 0; i < MAX_MASINI; i++){
        masini[i] = nullptr;
    }
}

void Atelier::AdaugaAngajat(Angajat* angajat) {
    if(numAngajati < MAX_ANGAJATI){
        angajati[numAngajati++] = angajat;
    } else {
        std::cout << "Atelierul a atins numarul maxim de angajati! ";
    }
}

void Atelier::AdaugaMasina(Masina* masina, bool raman) {
    if(numMasini < MAX_MASINI){
        masini[numMasini++] = masina;
    }

    else{
        AdaugaMasinaAsteptare(masina,raman);
    }
}

void Atelier::AdaugaMasinaAsteptare(Masina* masina, bool raman) {
    if(numMasiniAsteptare < MAX_MASINI_ASTEPTARE && raman == 1){
        masini_asteptare[numMasiniAsteptare++] = masina;
    }

    else if(numMasiniAsteptare >= MAX_MASINI_ASTEPTARE){
        std::cout << "S-a atins numarul maxim de masini care asteapta la coada ";
    }

    else if(raman == 0){
        std::cout << "Clientul a decis sa plece ";
    }
}

void Atelier::DeschideAtelier(Angajat* angajat) {
    if(numAngajati == 0){
        AdaugaAngajat(angajat);
    }

    else std::cout << "Atelierul a fost deja deschis ";
}

void Atelier::LuareInPrimireMasini(Masina* PrimaMasina, Masina* aDouaMasina, Masina* aTreiaMasina, Masina* aPatraMasina, bool raman) {
        if(numAngajati == 0){
            std::cout << "Nu se pot adauga masini in atelier deoarece acesta nu a fost deschis! ";
        }


}

Atelier::~Atelier() {
    for(int i = 0; i < MAX_ANGAJATI; i++){
        delete angajati[i];
    }

    for(int j = 0; j < MAX_MASINI; j++){
        delete masini[j];
    }
}



