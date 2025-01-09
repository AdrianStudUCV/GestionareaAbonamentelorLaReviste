#include "DigitalSubscription.h"
#include <iostream>

// Default constructor
DigitalSubscription::DigitalSubscription() : Subscription() {}

// Parameterized constructor
DigitalSubscription::DigitalSubscription(const std::string& customerName, const std::string& magazineType, const std::string& address, int duration, double price)
    : Subscription(customerName, magazineType, address, duration, price) {}

void DigitalSubscription::displayDetails() const {
    Subscription::displayDetails();
    std::cout << "Type: Digital\n";
}

std::string DigitalSubscription::getType() const {
    return "Digital";
}
