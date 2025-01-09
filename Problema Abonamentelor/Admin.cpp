#include "Admin.h"
#include <fstream>
#include <iostream>

// Destructor to clean up pointers in the subscriptions vector
Admin::~Admin() {
    for (auto subscription : subscriptions) {
        delete subscription;
    }
}

// Add a new physical subscription
void Admin::addPhysicalSubscription(const PhysicalSubscription& abonament) {
    subscriptions.push_back(new PhysicalSubscription(abonament));
}

// Add a new digital subscription
void Admin::addDigitalSubscription(const DigitalSubscription& abonament) {
    subscriptions.push_back(new DigitalSubscription(abonament));
}

// Remove a subscription by index
void Admin::deleteSubscription(int index) {
    if (index >= 0 && index < subscriptions.size()) {
        delete subscriptions[index];
        subscriptions.erase(subscriptions.begin() + index);
    }
}

// Modify an existing subscription
void Admin::modifySubscription(int index, const Subscription& abonament) {
    if (index >= 0 && index < subscriptions.size()) {
        *subscriptions[index] = abonament;
    }
}

// Display details of all subscriptions
void Admin::displayAllSubscriptions() const {
    for (const auto& subscription : subscriptions) {
        subscription->displayDetails();
    }
}

// Load subscriptions from a file
void Admin::loadSubscriptionsFromFile(const std::string& numeFisier) {
    std::ifstream fisier(numeFisier);
    if (fisier.is_open()) {
        for (auto subscription : subscriptions) {
            delete subscription;
        }
        subscriptions.clear();

        std::string nume, tip, adresa;
        int durata;
        double price;

        while (fisier >> nume >> tip >> adresa >> durata >> price) {
            if (tip == "Physical") {
                subscriptions.push_back(new PhysicalSubscription(nume, tip, adresa, durata, price));
            }
            else if (tip == "Digital") {
                subscriptions.push_back(new DigitalSubscription(nume, tip, adresa, durata, price));
            }
        }
        fisier.close();
    }
}

// Save subscriptions to a file
void Admin::saveSubscriptionsToFile(const std::string& numeFisier) const {
    std::ofstream fisier(numeFisier);
    if (fisier.is_open()) {
        for (const auto& subscription : subscriptions) {
            fisier << subscription->getCustomerName() << " " << subscription->getMagazineType() << " "
                << subscription->getAddress() << " " << subscription->getDuration() << " " << subscription->getPrice() << " "
                << subscription->getType() << std::endl;
        }
        fisier.close();
    }
}
