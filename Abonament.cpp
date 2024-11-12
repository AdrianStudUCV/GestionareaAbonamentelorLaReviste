#include "Abonament.h"
#include <iostream>

Abonament::Abonament() : durataInLuni(0), pret(0.0) {}

Abonament::Abonament(const std::string& numeClient, const std::string& tipRevista, const std::string& adresaClient, int durataInLuni, double pret)

: numeClient(numeClient), tipRevista(tipRevista), adresaClient(adresaClient), durataInLuni(durataInLuni), pret(pret) {}


std::string Abonament::getNumeClient() const { return numeClient; }
void Abonament::setNumeClient(const std::string& nume) { numeClient = nume; }

std::string Abonament::getTipRevista() const { return tipRevista; }
void Abonament::setTipRevista(const std::string& tip) { tipRevista = tip; }

std::string Abonament::getAdresaClient() const { return adresaClient; }
void Abonament::setAdresaClient(const std::string& adresa) { adresaClient = adresa; }

int Abonament::getDurata() const { return durataInLuni; }
void Abonament::setDurata(int durata) { durataInLuni = durata; }

double Abonament::getPret() const { return pret; }
void Abonament::setPret(double pretNou) { pret = pretNou; }

void Abonament::afiseazaDetalii() const {
    std::cout << "Client: " << numeClient << "\nRevista: " << tipRevista << "\nAdresa:"<< adresaClient << "\nDurata: " << durataInLuni
        << " luni\nPret: " << pret << " lei\n" << std::endl;
}
