#include <iostream>
#include "Director.h"
using namespace std;

int main() {
    Angajat* *vec = new Angajat*[2];
    char nume[30], prenume[30];
    int data_nasterii[8], data_angajarii[8];

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
        if(i == 4){
            while(data_angajarii[i] != 2){
                cout << "Introdu un prefix valid! ";
                cin >> data_angajarii[i];
            }
        }

        if(i == 5){
            while(data_angajarii[i] != 0){
                cout << "Introdu o cifra valida! ";
                cin >> data_angajarii[i];
            }
        }

        if(i == 6){
            while(data_angajarii[i] > 2){
                cout << "Introdu o cifra valida!";
            }
        }
    }

    vec[0] = new Director(nume,prenume,data_nasterii,data_angajarii);
    vec[0]->afisare();
    vec[1] = new Director(nume,prenume,data_nasterii,data_angajarii);
    vec[1]->afisare();



    return 0;
}
