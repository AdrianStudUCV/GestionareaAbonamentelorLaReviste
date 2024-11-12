#ifndef ABONAMENT_H
#define ABONAMENT_H

#include <string>

class Abonament {
private:
    std::string numeClient;
    std::string tipRevista;
    std::string adresaClient;
    int durataInLuni;
    double pret;

public:
    Abonament();
    Abonament(const std::string& numeClient, const std::string& tipRevista, const std::string& adresa, int durataInLuni, double pret);

    // Getters și Setters
    std::string getNumeClient() const;
    void setNumeClient(const std::string& nume);

    std::string getTipRevista() const;
    void setTipRevista(const std::string& tip);

    std::string getAdresaClient() const;
    void setAdresaClient(const std::string& adresa);

    int getDurata() const;
    void setDurata(int durata);

    double getPret() const;
    void setPret(double pret);

    // Metodă pentru afișare
    void afiseazaDetalii() const;
};

#endif

