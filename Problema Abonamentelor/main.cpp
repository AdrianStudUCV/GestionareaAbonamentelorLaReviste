// main.cpp
#include "Admin.h"
#include "PhysicalSubscription.h"
#include "DigitalSubscription.h"
#include <iostream>
#include <string>

bool adminLogin() {
    std::string password;
    std::cout << "Enter admin password: ";
    std::cin >> password;
    return password == "admin123";
}

void adminMenu(Admin& admin) {
    int option;
    do {
        std::cout << "\n--- Admin Menu ---\n";
        std::cout << "1. Display subscriptions\n"
            << "2. Add physical subscription\n"
            << "3. Add digital subscription\n"
            << "4. Delete subscription\n"
            << "5. Modify subscription\n"
            << "6. Save and exit\n";
        std::cout << "Select an option: ";
        std::cin >> option;

        switch (option) {
        case 1:
            admin.displayAllSubscriptions();
            break;
        case 2: {
            std::string name, magazineType, address;
            int duration;
            double price;

            std::cout << "Customer Name: ";
            std::cin >> name;
            std::cout << "Magazine Type: ";
            std::cin >> magazineType;
            std::cout << "Address: ";
            std::cin >> address;
            std::cout << "Duration (months): ";
            std::cin >> duration;
            std::cout << "Price: ";
            std::cin >> price;

            admin.addPhysicalSubscription(PhysicalSubscription(name, magazineType, address, duration, price));
            break;
        }
        case 3: {
            std::string name, magazineType, email;
            int duration;
            double price;

            std::cout << "Customer Name: ";
            std::cin >> name;
            std::cout << "Magazine Type: ";
            std::cin >> magazineType;
            std::cout << "Email: ";
            std::cin >> email;
            std::cout << "Duration (months): ";
            std::cin >> duration;
            std::cout << "Price: ";
            std::cin >> price;

            admin.addDigitalSubscription(DigitalSubscription(name, magazineType, email, duration, price));
            break;
        }
        case 4: {
            int index;
            std::cout << "Enter subscription index to delete: ";
            std::cin >> index;
            admin.deleteSubscription(index);
            std::cout << "Subscription deleted.\n";
            break;
        }
        case 5: {
            int index;
            std::string name, magazineType, address;
            int duration;
            double price;

            std::cout << "Enter subscription index to modify: ";
            std::cin >> index;
            std::cout << "New Customer Name: ";
            std::cin >> name;
            std::cout << "New Magazine Type: ";
            std::cin >> magazineType;
            std::cout << "New Address: ";
            std::cin >> address;
            std::cout << "New Duration (months): ";
            std::cin >> duration;
            std::cout << "New Price: ";
            std::cin >> price;

            admin.modifySubscription(index, PhysicalSubscription(name, magazineType, address, duration, price));
            std::cout << "Subscription modified.\n";
            break;
        }
        case 6:
            admin.saveSubscriptionsToFile("subscriptions.txt");
            std::cout << "Subscriptions saved successfully. Exiting...\n";
            break;
        default:
            std::cout << "Invalid option. Try again.\n";
        }
    } while (option != 6);
}

void userMenu(Admin& admin) {
    int option;
    do {
        std::cout << "\n--- User Menu ---\n";
        std::cout << "1. Create physical subscription\n"
            << "2. Create digital subscription\n"
            << "3. Modify subscription\n"
            << "4. Save and exit\n";
        std::cout << "Select an option: ";
        std::cin >> option;

        switch (option) {
        case 1: {
            std::string name, magazineType, address;
            int duration;
            double price;

            std::cout << "Customer Name: ";
            std::cin >> name;
            std::cout << "Magazine Type: ";
            std::cin >> magazineType;
            std::cout << "Address: ";
            std::cin >> address;
            std::cout << "Duration (months): ";
            std::cin >> duration;
            std::cout << "Price: ";
            std::cin >> price;

            admin.addPhysicalSubscription(PhysicalSubscription(name, magazineType, address, duration, price));
            std::cout << "Physical subscription created.\n";
            break;
        }
        case 2: {
            std::string name, magazineType, email;
            int duration;
            double price;

            std::cout << "Customer Name: ";
            std::cin >> name;
            std::cout << "Magazine Type: ";
            std::cin >> magazineType;
            std::cout << "Email: ";
            std::cin >> email;
            std::cout << "Duration (months): ";
            std::cin >> duration;
            std::cout << "Price: ";
            std::cin >> price;

            admin.addDigitalSubscription(DigitalSubscription(name, magazineType, email, duration, price));
            std::cout << "Digital subscription created.\n";
            break;
        }
        case 3: {
            int index;
            std::string name, magazineType, address;
            int duration;
            double price;

            std::cout << "Enter subscription index to modify: ";
            std::cin >> index;
            std::cout << "New Customer Name: ";
            std::cin >> name;
            std::cout << "New Magazine Type: ";
            std::cin >> magazineType;
            std::cout << "New Address: ";
            std::cin >> address;
            std::cout << "New Duration (months): ";
            std::cin >> duration;
            std::cout << "New Price: ";
            std::cin >> price;

            admin.modifySubscription(index, PhysicalSubscription(name, magazineType, address, duration, price));
            std::cout << "Subscription modified.\n";
            break;
        }
        case 4:
            admin.saveSubscriptionsToFile("subscriptions.txt");
            std::cout << "Subscriptions saved successfully. Exiting...\n";
            break;
        default:
            std::cout << "Invalid option. Try again.\n";
        }
    } while (option != 4);
}

int main() {
    Admin admin;

    // Load subscriptions from file
    admin.loadSubscriptionsFromFile("subscriptions.txt");

    int userType;
    std::cout << "Select user type:\n1. Admin\n2. User\n";
    std::cin >> userType;

    if (userType == 1) {
        if (adminLogin()) {
            adminMenu(admin);
        }
        else {
            std::cout << "Incorrect password. Exiting...\n";
        }
    }
    else if (userType == 2) {
        userMenu(admin);
    }
    else {
        std::cout << "Invalid option. Exiting...\n";
    }

    return 0;
}

