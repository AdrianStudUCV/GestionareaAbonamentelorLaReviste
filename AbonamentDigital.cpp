#include "AbonamentDigital.h"
#include <iostream>

AbonamentDigital::AbonamentDigital() : Abonament() {}

AbonamentDigital::AbonamentDigital(const std::string& numeClient, const std::string& tipRevista, const std::string& adresaClient, int durataInLuni, double pret)
    : Abonament(numeClient, tipRevista, adresaClient, durataInLuni,pret) {}

std::string AbonamentDigital::getTipDispozitiv() const
{
    return std::string();
}


void AbonamentDigital::afiseazaDetalii() const {
    Abonament::afiseazaDetalii();
   
}