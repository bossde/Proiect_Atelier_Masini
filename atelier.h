#include "interfata1.h"
#include "interfata2.h"
#pragma once

class Atelier{
    static const int MAX_ANGAJATI = 10;
    static const int MAX_MASINI = 4 * MAX_ANGAJATI;
    static const int MAX_MASINI_ASTEPTARE = 10;

    Angajat*  angajati[MAX_ANGAJATI];
    Masina* masini[MAX_MASINI];
    Masina* masini_asteptare[MAX_MASINI_ASTEPTARE];

    int numAngajati;
    int numMasini;
    int numMasiniAsteptare;

    void AdaugaMasina(Masina* ,bool );
    void AdaugaMasinaAnumitAngajat(Masina* ,int );
    void AdaugaMasinaAsteptare(Masina* ,bool = true);
    bool VerificaTipuriMasini(Masina* ,Masina* ,Masina* ,Masina* );
public:
    Atelier();
    void AdaugaAngajat(Angajat* );
    bool esteDeschis() const;
    void luare_in_primire_masini(bool ,Masina* = nullptr ,Masina* = nullptr,Masina* = nullptr, Masina* = nullptr);
    void afisare_masini_atelier() const;
    void adaugare_masina_angajat_precizat(int ,Masina* = nullptr);
    void afisare_coada() const;
    void afisare_angajati() const;
    void optiune_asteptare(Masina* ,int );
    ~Atelier();
};
