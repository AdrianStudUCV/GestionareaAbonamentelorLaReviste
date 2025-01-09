#ifndef DIGITALSUBSCRIPTION_H
#define DIGITALSUBSCRIPTION_H

#include "Subscription.h"

class DigitalSubscription : public Subscription {
public:
    DigitalSubscription();
    DigitalSubscription(const std::string& customerName, const std::string& magazineType, const std::string& address, int duration, double price);

    // Override the displayDetails method
    void displayDetails() const override;
    std::string getType() const override;
};

#endif
