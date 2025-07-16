#pragma once

#ifndef INVENTORY_H
#define INVENTORY_H

#include <vector>
#include <string>
#include <algorithm>
#include <iostream>

class Inventory{
public:
    // Constructor
    Inventory();

    // Overloaded Constructor
    Inventory(int capacity_i);

    // Destructor
    ~Inventory();

    // Add item to inventory
    void addItem(const std::string& item);

    // Remove item from inventory
    void removeItem(const std::string& item);

    // Access item by index
    std::string getItem(int index) const;

    // Get number of items in the inventory
    int getItemCount() const;

    // Display inventory contents
    void displayInventory() const;

private:
    std::vector<std::string> *items; // Pointer to a vector of items
    int capacity; // Maximum number of items allowed
};

#endif // INVENTORY_H
