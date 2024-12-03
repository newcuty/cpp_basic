#include "basic_class.h"

BasicClass::BasicClass() {
    std::cout << "BasicClass constructor called.\n";
    data_ = 0;
}

BasicClass::~BasicClass() { 
    std::cout << "BasicClass destructor called.\n";
}

BasicClass::BasicClass(const BasicClass& other) {
    std::cout << "BasicClass copy constructor called.\n";
    data_ = other.data_;
}

BasicClass::BasicClass(BasicClass&& other){
    
    std::cout << "BasicClass move constructor called.\n";
    data_ = other.data_;
}

void BasicClass::setData(int data) {

    std::cout << "setData called with " << data << ".\n";
    data_ = data;
}

int BasicClass::getData() const {
    std::cout << "getData called.\n";
    return data_;
}

BasicClass& BasicClass::operator=(const BasicClass& other) {
    std::cout << "operator= called.\n";
    if (this != &other)
    {
        data_ = other.data_;
    }

    return *this;
}