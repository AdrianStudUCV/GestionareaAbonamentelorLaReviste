#ifndef ABONAMENTDIGITAL_H
#define ABONAMENTDIGITAL_H

#include "Abonament.h"

class AbonamentDigital : public Abonament {
private:
    std::string tipDispozitiv;

public:
    AbonamentDigital();
    AbonamentDigital(const std::string& numeClient, const std::string& tipRevista, const std::string& adresaClient, int durataInLuni, double pret);
    

    std::string getTipDispozitiv() const;
    void setTipDispozitiv(const std::string& dispozitiv);

    void afiseazaDetalii() const ; 
};

#endif

