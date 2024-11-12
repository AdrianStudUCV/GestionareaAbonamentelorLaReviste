
#ifndef ABONAMENTFIZIC_H
#define ABONAMENTFIZIC_H

#include "Abonament.h"

class AbonamentFizic : public Abonament {
private:
    std::string adresaLivrare;

public:
    AbonamentFizic();
    AbonamentFizic(const std::string& numeClient, const std::string& tipRevista, const std::string& adresaClient, int durataInLuni, double pret);
 

    std::string getAdresaLivrare() const;
    void setAdresaLivrare(const std::string& adresa);

    void afiseazaDetalii() const ;  
};

#endif
