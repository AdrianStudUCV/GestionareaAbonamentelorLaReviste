#include "Admin.h"
#include <fstream>
#include <iostream>

void Admin::incarcaAbonamenteDinFisier(const std::string& numeFisier) {
    std::ifstream fisier(numeFisier);
    if (fisier.is_open()) {
        abonamente.clear();
        std::string nume, tip, adresa;
        int durata;
        double pret;
        while (fisier >> nume >> tip >>adresa>> durata >> pret) {
            abonamente.emplace_back(nume, tip, adresa , durata, pret);
        }
        fisier.close();
    }
}


void Admin::salveazaAbonamenteInFisier(const std::string& numeFisier) {
    std::ofstream fisier(numeFisier);
    if (fisier.is_open()) {
        for (const auto& abonament : abonamente) {
            fisier << abonament.getNumeClient() << " " << abonament.getTipRevista() << " "
               << abonament.getAdresaClient()<< " " << abonament.getDurata() << " " << abonament.getPret() << std::endl;
        }
        fisier.close();
    }
}
void Admin::adaugaAbonamentFizic(const AbonamentFizic& abonament) {
    abonamente.push_back(abonament);
}

void Admin::adaugaAbonamentDigital(const AbonamentDigital& abonament) {
    abonamente.push_back(abonament);
}



void Admin::stergeAbonament(int index) {
    if (index >= 0 && index < abonamente.size()) {
        abonamente.erase(abonamente.begin() + index);
    }
}

void Admin::modificaAbonament(int index, const Abonament& abonament) {
    if (index >= 0 && index < abonamente.size()) {
        abonamente[index] = abonament;
    }
}

void Admin::afiseazaToateAbonamentele() const {
    for (const auto& abonament : abonamente) {
        abonament.afiseazaDetalii();
    }
}
