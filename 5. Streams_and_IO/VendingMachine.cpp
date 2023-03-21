#include "VendingMachine.h"
#include <iostream>

#pragma warning(disable: 4996)

int currentID = 0;
const int MAX_SIZE = 128;

/*void changeSalty(int quantity);
    void changeSweets(int quantity);
    void changeDrinks(int quantity);
    void print();*/

void Inventory::changeSalty(int quantity) {
    this->salty = quantity;
}

void Inventory::changeSweets(int quantity) {
    this->sweet = quantity;
}

void Inventory::changeDrinks(int quantity) {
    this->drinks = quantity;
}

void Inventory::print() {
    std::cout << "Salty: " << this->salty << " Sweets: " << this->sweet << " Drinks: " << this->drinks << std::endl;
}

/*class VendingMachine {
    int id;
    char* address;
    Inventory inventory;
    char** warningMessages;
    int numWarningMsgs;
    int capacity;

public:
    VendingMachine(); 
    VendingMachine(char* address, Inventory inventory); 
    VendingMachine(VendingMachine const& other); 
    VendingMachine(VendingMachine&& other); 
    VendingMachine& operator=(VendingMachine const& other);
    ~VendingMachine();

};*/

VendingMachine::VendingMachine() {
    currentID++;
    this->id = currentID;
    this->address = new char[MAX_SIZE];
    this->inventory.changeSalty(0);
    this->inventory.changeSweets(0);
    this->inventory.changeDrinks(0);
    this->capacity = 10;
    this->warningMessages = new * char[capacity];
    for (int i = 0; i < capacity; i++)
    {
        warningMessages[i] = new char[MAX_SIZE];
    }
    this->numWarningMsgs = 0;
}

VendingMachine::VendingMachine(char* address, Inventory inventory) {
    currentID++;
    this->id = currentID;
    this->address = address;
    this->inventory.changeSalty(inventory.salty);
    this->inventory.changeSweets(inventory.sweet);
    this->inventory.changeDrinks(inventory.drinks);
    this->capacity = 10;
    this->warningMessages = new char*[capacity];
    for (int i = 0; i < capacity; i++)
    {
        warningMessages[i] = new char[MAX_SIZE];
    }
    this->numWarningMsgs = 0;
}

VendingMachine::VendingMachine(VendingMachine const& other) {
    currentID++;
    this->id = currentID;
    this->address = new char[MAX_SIZE];
    int index = 0;
    while (other.address != '\0') {
        address[index] = other.address[index];
    }
    address[index] = '\0';
    this->inventory.changeSalty(other.inventory.salty);
    this->inventory.changeSweets(other.inventory.sweet);
    this->inventory.changeDrinks(other.inventory.drinks);
    this->capacity = other.capacity;
    this->warningMessages = new char*[capacity];
    int j;
    for (int i = 0; i < other.capacity; i++)
    {
        warningMessages[i] = new char[MAX_SIZE];
        j = 0;
        while (other.warningMessages[i][j] != '\0') {
            warningMessages[i][j] = other.warningMessages[i][j];
        }
        warningMessages[i][j] = '\0';
    }
}

VendingMachine::VendingMachine(VendingMachine && other) {

}

VendingMachine& VendingMachine::operator=(VendingMachine const& other) {

}

VendingMachine::~VendingMachine() {

}

/*class VendingController {
    VendingMachine* vendingMachineList;
    int numMachines;
    int capacity;

public:
    void addVendingMachine(VendingMachine machine);
    void getAddressOfMachine(int machineID);
    void getInventoryOfMachine(int machineID);
    void sellProductInMachine(int machineID, char* product);
    void restockProductInMachine(int machineID, char* product);
    void seeWarningMsgForMachine(int machineID);
};*/

void VendingController::addVendingMachine(VendingMachine machine) {

}

void VendingController::getAddressOfMachine(int machineID) {

}

void VendingController::getInventoryOfMachine(int machineID) {

}

void VendingController::sellProductInMachine(int machineID, char* product) {

}

void VendingController::restockProductInMachine(int machineID, char* product) {

}

void VendingController::seeWarningMsgForMachine(int machineID) {

}