#include "interfata1.h"
#include "interfata2.h"

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

public:
    Atelier();
    void AdaugaAngajat(Angajat* );
    void AdaugaMasina(Masina* ,bool );
    void AdaugaMasinaAsteptare(Masina* ,bool );
    void DeschideAtelier(Angajat* );
    ~Atelier();
};
