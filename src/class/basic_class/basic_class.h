#ifndef BASIC_CLASS_H
#define BASIC_CLASS_H

#include <iostream>

class People{
public:
    People(){
        std::cout << "People constructor called." << std::endl;
    }
    ~People(){
        std::cout << "People destructor called." << std::endl;
    }
};

class BasicClass {
public:
    explicit BasicClass();
    ~BasicClass();

    //move constructor
    BasicClass(BasicClass&& other);

    //copy constructor
    BasicClass(const BasicClass& other);

    //set data 
    void setData(int data);
    //get data
    int getData() const;

    //operator overloading
    BasicClass& operator=(const BasicClass& other);

private:    
    int data_;
    const int& refe_data_ = data_;
    People people_;
};  //class BasicClass

#endif // BASIC_CLASS_H