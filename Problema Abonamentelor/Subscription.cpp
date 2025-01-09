#include "Subscription.h"
#include <iostream>

// Default constructor
Subscription::Subscription() : duration(0), price(0.0) {}

// Parameterized constructor
Subscription::Subscription(const std::string& customerName, const std::string& magazineType, const std::string& address, int duration, double price)
    : customerName(customerName), magazineType(magazineType), address(address), duration(duration), price(price) {}

// Getter and Setter methods
std::string Subscription::getCustomerName() const {
    return customerName;
}

void Subscription::setCustomerName(const std::string& name) {
    customerName = name;
}

std::string Subscription::getMagazineType() const {
    return magazineType;
}

void Subscription::setMagazineType(const std::string& type) {
    magazineType = type;
}

std::string Subscription::getAddress() const {
    return address;
}

void Subscription::setAddress(const std::string& addr) {
    address = addr;
}

int Subscription::getDuration() const {
    return duration;
}

void Subscription::setDuration(int dur) {
    duration = dur;
}

double Subscription::getPrice() const {
    return price;
}

void Subscription::setPrice(double cost) {
    price = cost;
}

void Subscription::displayDetails() const {
    std::cout << "Customer Name: " << customerName << "\n"
        << "Magazine Type: " << magazineType << "\n"
        << "Address: " << address << "\n"
        << "Duration: " << duration << " months\n"
        << "Price: $" << price << std::endl;
}
