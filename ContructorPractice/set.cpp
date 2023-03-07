#include "set.h"
#include <iostream>


Set::Set() {

}

Set::Set(Set const& other) {

}



bool Set::addElement(int const element) {
    for (int i = 0; i < this->numElement; i++)
    {
        if (elements[i] == element) {
            return false;
        }
    }
    if (this.capacity == this.numElement) {
        this.resize();
    }
    this.numElement++;
    this.elements[numElement]
    return true;
}

bool Set::deleteElement(int const element) {
    for (int i = 0; i < this.numElements; i++)
    {
        if (element == this.elements[i]) {
            for (int j = i; j < numElements - 1; j++)
            {
                this.elements[j] = this.elements[j + 1];
            }
            this.elements[numElement - 1] = 0;
            this.numElement--;
            return true;
        }
    }
    return false;
}


void Set::setUnion(Set const& other) {
    for (int i = 0; i < other.numElements; i++)
    {
        this.addElement(other.elements[i])
    }

void Set::setIntersection(Set const& other) {
    for (int i = 0; i < other.numElements; i++)
    {
        this.deleteElement(other.elements[i])
    }
}

void Set::print() {
    for (int i = 0; i < this.numElements; i++)
    {
        std::cout << this.elements[i];
    }
}

void Set::resize() {
    this.capacity *= 2;
    int* copySet = new int[this.capacity];
    for (int i = 0; i < this.numElements; i++)
    {
        copySet[i] = this.elements[i];
    }
}

/*
* 
    bool addElement(int const element);
    bool deleteElement(int const element);
    void setUnion(Set const& other);
    void setIntersection(Set const& other);
    void print();
*/