#ifndef ADMIN_H
#define ADMIN_H

#include "Abonament.h"
#include "AbonamentDigital.h"
#include "AbonamentFizic.h"
#include <vector>
#include <string>

class Admin {
private:
    std::vector<Abonament> abonamente;
    
public:
    void incarcaAbonamenteDinFisier(const std::string& numeFisier);
    void salveazaAbonamenteInFisier(const std::string& numeFisier);
    void adaugaAbonamentFizic(const AbonamentFizic& abonament);
    void adaugaAbonamentDigital(const AbonamentDigital& abonament);
    
    void stergeAbonament(int index);
    void modificaAbonament(int index, const Abonament& abonament);
    void afiseazaToateAbonamentele() const;
};

#endif

