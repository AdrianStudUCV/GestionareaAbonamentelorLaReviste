#include "AbonamentFizic.h"
#include "Abonament.h"
#include <iostream>

AbonamentFizic::AbonamentFizic() : Abonament() {}

AbonamentFizic::AbonamentFizic(const std::string& numeClient, const std::string& tipRevista, const std::string& adresaClient, int durataInLuni, double pret)
    : Abonament(numeClient, tipRevista, adresaClient , durataInLuni, pret) {}

std::string AbonamentFizic::getAdresaLivrare() const { return adresaLivrare; }
void AbonamentFizic::setAdresaLivrare(const std::string& adresa) { adresaLivrare = adresa; }



void AbonamentFizic::afiseazaDetalii() const {
    Abonament::afiseazaDetalii();
    
}