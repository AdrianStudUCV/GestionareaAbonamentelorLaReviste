#ifndef PHYSICALSUBSCRIPTION_H
#define PHYSICALSUBSCRIPTION_H

#include "Subscription.h"

class PhysicalSubscription : public Subscription {
public:
    PhysicalSubscription();
    PhysicalSubscription(const std::string& customerName, const std::string& magazineType, const std::string& address, int duration, double price);

    // Override the displayDetails method
    void displayDetails() const override;
    std::string getType() const override;
};

#endif
