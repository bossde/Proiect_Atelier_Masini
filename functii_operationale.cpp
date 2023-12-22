#include "functii_operationale.h"
#include "standard.h"
#include "autobuze.h"
#include "camion.h"
#include <iostream>
using namespace std;

void citire_date(char* nume, char* prenume, int* data_nasterii, int* data_angajarii){
    cout << "Citeste un nume: ";
    cin >> nume;

    cout << "Citeste un prenume: ";
    cin >> prenume;

    cout << "Citeste o data de nastere: ";
    for(int i = 0; i < 8; i++){
        cin >> data_nasterii[i];
    }

    cout << "Citeste o data de angajare: ";
    for(int i = 0; i < 8; i++){
        cin >> data_angajarii[i];
        switch(i) {
            case 0:
                while(data_angajarii[i] > 3){
                    cout << "Introdu o zi valida!: ";
                    cin >> data_angajarii[i];
                }
                break;

            case 1:
                while(data_angajarii[i - 1] == 3 && data_angajarii[i] > 1){
                    cout << "Introdu o zi valida!: ";
                    cin >> data_angajarii[i];
                }
                break;

            case 2:
                while(data_angajarii[i] > 1){
                    cout << "Introdu o luna valida! ";
                    cin >> data_angajarii[i];
                }
                break;

            case 3:
                while(data_angajarii[i - 1] == 1 && data_angajarii[i] > 2){
                    cout << "Introdu o luna valida!: ";
                    cin >> data_angajarii[i];
                }
                break;

            case 4:
                while(data_angajarii[i] != 2){
                    cout << "Introdu un an valid!: ";
                    cin >> data_angajarii[i];
                }
                break;

            case 5:
                while(data_angajarii[i] != 0){
                    cout << "Introdu un an valida!: ";
                    cin >> data_angajarii[i];
                }
                break;

            case 6:
                while(data_angajarii[i] > 2){
                    cout << "Introdu un an valida!: ";
                    cin >> data_angajarii[i];
                }
                break;

            default:
                break;
        }

    }
}

void afisareMeniu() {
    std::cout << "\n===== Meniu Atelier =====\n";
    std::cout << "1. Afișare Angajați\n";
    std::cout << "2. Afișare Mașini În Așteptare\n";
    std::cout << "3. Verificare daca este deschis\n";
    std::cout << "4. Adaugare masini pentru un angajat\n";
    std::cout << "5. Asteptare la coada la un anumit angajat\n";
    std::cout << "6. Ieșire\n";
    std::cout << "=========================\n";
}

void optiune_executie(int optiune, Atelier atelier){
    int nrAngajat;
    switch (optiune) {
        case 1:
            atelier.afisare_angajati();
            break;
        case 2:
            atelier.afisare_coada();
            break;
        case 3:
            if(atelier.esteDeschis() == true){
                std :: cout << "Atelierul este deschis";
            }
            else{
                std :: cout << "Atelierul este inchis";
            }
            break;
        case 4:
            std :: cout << "Citeste angajatul la care doresti sa astepti!\n";
            std :: cout << "Nr. angajat: ";
            std :: cin >> nrAngajat;
            atelier.adaugare_masina_angajat_precizat(nrAngajat,citeste_masina());
            break;
        case 5:
            std :: cout << "Citeste numarul angajatului la care vrei sa astepti: \n" << "Nr angajat: ";
            std :: cin >> nrAngajat;
            atelier.optiune_asteptare(citeste_masina(),nrAngajat);
            break;
        case 6:
            std::cout << "La revedere!\n";
            break;
        default:
            std::cout << "Opțiune invalidă. Reîncercați.\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
}

Masina* citeste_masina() {
    char ID[8];
    int nr_kilometri;
    int anul_fabricatiei;
    bool este_diesel;
    double tonaj = 0.0;
    int nr_locuri = 0;
    bool este_automat = false;

    cout << "Introduceti datele pentru masina:\n";
    cout << "ID: ";
    cin >> ID;

    cout << "Numar Kilometri: ";
    cin >> nr_kilometri;

    cout << "Anul fabricatiei: ";
    cin >> anul_fabricatiei;

    cout << "Este motor diesel (1 pentru Da / 0 pentru Nu): ";
    cin >> este_diesel;

    // Alegeți tipul de mașină
    int tip_masina;
    cout << "Alege tipul de masina (1 pentru Standard, 2 pentru Autobuz, 3 pentru Camion): ";
    cin >> tip_masina;

    switch (tip_masina) {
        case 1: // Standard
            cout << "Este automat (1 pentru Da / 0 pentru Nu): ";
            cin >> este_automat;
            return new Standard(ID, nr_kilometri, anul_fabricatiei, este_diesel, este_automat);
        case 2: // Autobuz
            cout << "Numar Locuri: ";
            cin >> nr_locuri;
            return new Autobuz(ID, anul_fabricatiei, nr_kilometri, este_diesel, nr_locuri);
        case 3: // Camion
            cout << "Tonaj: ";
            cin >> tonaj;
            return new Camion(ID, nr_kilometri, anul_fabricatiei, este_diesel, tonaj);
        default:
            cout << "Tip de masina invalid.\n";
            return nullptr;
    }
}

void introducere_masini(Atelier atelier, int numAngajati){
    for(int i = 0; i < numAngajati; i++){
        atelier.luare_in_primire_masini(true,citeste_masina(),citeste_masina(),citeste_masina(),citeste_masina());
    }

    atelier.afisare_masini_atelier();
}
