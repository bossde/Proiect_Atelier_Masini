#include "functii_operationale.h"
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
