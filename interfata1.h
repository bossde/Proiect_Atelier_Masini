#pragma once
class Angajat{
protected:
    static int id;
    char nume[30];
    char prenume[30];
    int data_nasterii[8];
    int data_angajarii[8];
    double coeficient_salariu;
public:
    Angajat();
    virtual inline void afisare() = 0;
    virtual inline double calcul_salariu() = 0;
    virtual inline void editare_angajat(char*, char*, int*, int*) = 0;
    virtual ~Angajat();
};

