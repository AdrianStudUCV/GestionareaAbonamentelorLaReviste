#ifndef SUBSCRIPTION_H
#define SUBSCRIPTION_H

#include <string>

class Subscription {
protected:
    std::string customerName;
    std::string magazineType;
    std::string address;
    int duration;
    double price;

public:
    Subscription();
    Subscription(const std::string& customerName, const std::string& magazineType, const std::string& address, int duration, double price);

    // Getters and Setters
    std::string getCustomerName() const;
    void setCustomerName(const std::string& name);

    std::string getMagazineType() const;
    void setMagazineType(const std::string& type);

    std::string getAddress() const;
    void setAddress(const std::string& address);

    int getDuration() const;
    void setDuration(int duration);

    double getPrice() const;
    void setPrice(double price);

    virtual std::string getType() const = 0;
    virtual void displayDetails() const;
};

#endif