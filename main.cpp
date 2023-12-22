#include <iostream>
#include <vector>
#include <limits>
#include "Director.h"
#include "functii_operationale.h"
#include "functii_operationale.cpp"
#include "camion.h"
#include "camion.cpp"
#include "autobuze.h"
#include "autobuze.cpp"
#include "standard.h"
#include "standard.cpp"
#include "atelier.h"
#include "atelier.cpp"
#include "asistent.h"
#include "asistent.cpp"
#include "mecanic.h"
using namespace std;

int main() {
    Atelier atelier;

    int numarAngajati;
    std::cout << "Introduceti numarul de angajati pe care doriti sa-l cititi: ";
    std::cin >> numarAngajati;

    for (int i = 0; i < numarAngajati; ++i) {
        char nume[30], prenume[30];
        int data_nasterii[8], data_angajarii[8];

        citire_date(nume, prenume, data_nasterii, data_angajarii);

        // Adaugăm un angajat în funcție de tip
        int tipAngajat;
        std::cout << "Introduceti tipul angajatului (1 - Mecanic, 2 - Director, 3 - Asistent): ";
        std::cin >> tipAngajat;

        switch (tipAngajat) {
            case 1:
                atelier.AdaugaAngajat(new Mecanic(nume, prenume, data_nasterii, data_angajarii,5));
                break;
            case 2:
                atelier.AdaugaAngajat(new Director(nume, prenume, data_nasterii, data_angajarii,4));
                break;
            case 3:
                atelier.AdaugaAngajat(new Asistent(nume, prenume, data_nasterii, data_angajarii,3));
                break;
            default:
                std::cout << "Tip de angajat invalid.\n";
        }
    }

    introducere_masini(atelier,numarAngajati);

    int optiune;
    do {
        afisareMeniu();
        std::cout << "Alegeți o opțiune: ";
        std::cin >> optiune;

        optiune_executie(optiune,atelier);
    } while (optiune != 6);


    return 0;
}