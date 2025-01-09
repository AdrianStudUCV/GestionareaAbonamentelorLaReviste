#include "PhysicalSubscription.h"
#include <iostream>

// Default constructor
PhysicalSubscription::PhysicalSubscription() : Subscription() {}

// Parameterized constructor
PhysicalSubscription::PhysicalSubscription(const std::string& customerName, const std::string& magazineType, const std::string& address, int duration, double price)
    : Subscription(customerName, magazineType, address, duration, price) {}

void PhysicalSubscription::displayDetails() const {
    Subscription::displayDetails();
    std::cout << "Type: Physical\n";
}

std::string PhysicalSubscription::getType() const {
    return "Physical";
}
