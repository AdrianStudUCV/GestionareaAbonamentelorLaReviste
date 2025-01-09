#ifndef ADMIN_H
#define ADMIN_H

#include <vector>
#include <string>
#include "Subscription.h"
#include "PhysicalSubscription.h"
#include "DigitalSubscription.h"

class Admin {
private:
    std::vector<Subscription*> subscriptions;

public:
    ~Admin();

    void addPhysicalSubscription(const PhysicalSubscription& abonament);
    void addDigitalSubscription(const DigitalSubscription& abonament);

    void deleteSubscription(int index);
    void modifySubscription(int index, const Subscription& abonament);

    void displayAllSubscriptions() const;
    void loadSubscriptionsFromFile(const std::string& numeFisier);
    void saveSubscriptionsToFile(const std::string& numeFisier) const;
};

#endif
