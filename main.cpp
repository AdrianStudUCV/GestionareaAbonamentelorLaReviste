// Problema Abonamentelor.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "AbonamentFizic.h"
#include "AbonamentDigital.h"
#include "Admin.h"
#include "Abonament.h"
#include <iostream>

void meniuAdmin() {
    Admin admin;
    admin.incarcaAbonamenteDinFisier("abonamente.txt");

    int optiune;
    do {
        std::cout << "1. Afiseaza abonamente\n2. Adauga abonament fizic\n3. Adauga abonament digital\n4. Sterge abonament\n5. Modifica abonament\n6. Salveaza si iesi\n";
        std::cout << "Selectati o optiune: ";
        std::cin >> optiune;

        switch (optiune) {
        case 1:
            admin.afiseazaToateAbonamentele();
            break;
        case 2: {

            std::string nume, tip, adresa;
            int durata;
            double pret;

            std::cout << "Nume client: "; std::cin >> nume;
            std::cout << "Tip revista: "; std::cin >> tip;
            std::cout << "Durata (luni): "; std::cin >> durata;
            std::cout << "Pret: "; std::cin >> pret;
            std::cout << "Adresa de livrare: "; std::cin >> adresa;
            admin.adaugaAbonamentFizic(AbonamentFizic(nume, tip, adresa , durata, pret));
            break;
        }
        case 3:{
        
            std::string nume, tip, adresa ;
            int durata;
            double pret;

            std::cout << "Nume client: "; std::cin >> nume;            
            std::cout << "Tip revista: "; std::cin >> tip;
            std::cout << "Durata (luni): "; std::cin >> durata;
            std::cout << "Pret: "; std::cin >> pret;
            std::cout << "Adresa email Client: "; std::cin >> adresa;
            admin.adaugaAbonamentDigital(AbonamentDigital(nume, tip, adresa, durata, pret));
            break;
        }
        case 4: {
            int index;
            std::cout << "Index abonament de sters: ";
            std::cin >> index;
            admin.stergeAbonament(index);
            break;
        }
        case 5: {
            int index;
            std::string nume, tip, adresa;
            int durata;
            double pret;
            std::cout << "Index abonament de modificat: "; std::cin >> index;
            std::cout << "Nume nou: "; std::cin >> nume;
            std::cout << "Tip nou revista: "; std::cin >> tip;
            std::cout << "Adresa noua"; std::cin >> adresa;
            std::cout << "Durata noua (luni): "; std::cin >> durata;
            std::cout << "Pret nou: "; std::cin >> pret;
            admin.modificaAbonament(index, Abonament(nume, tip,adresa, durata, pret));
            break;
        }
        case 6:
            admin.salveazaAbonamenteInFisier("abonamente.txt");
            std::cout << "Datele au fost salvate. La revedere!\n";
            break;
        default:
            std::cout << "Optiune invalida. Incercati din nou.\n";
        }
    } while (optiune != 6);
}

int main() {
    meniuAdmin();
    return 0;
}
